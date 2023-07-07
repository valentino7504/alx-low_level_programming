#include "hash_tables.h"
/**
 * hash_table_set - sets a key value pair in a hash table
 * @ht: the hash table
 * @key: the key
 * @value: the value
 * Return: 0 if failed or 1 if succeeded
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = key_index((unsigned char *) key, ht->size), i;
	char *new_value;
	hash_node_t *new_node = malloc(sizeof(hash_node_t)), *current_node;

	if (ht == NULL || key == NULL || value == NULL || strlen(key) == 0)
		return (0);
	current_node = ht->array[index];
	new_value = strdup(value);
	if (new_value == NULL)
		return (0);
	for (i = 0; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = new_value;
			return (1);
		}
	}
	while (current_node != NULL)
	{
		if (strcmp(current_node->key, key) == 0)
		{
			free(current_node->value);
			current_node->value = new_value;
			return (1);
		}
		current_node = current_node->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = new_value;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
