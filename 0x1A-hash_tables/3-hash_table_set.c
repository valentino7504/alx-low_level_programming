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
	unsigned long int index;
	char *new_value;
	hash_node_t *new_node = malloc(sizeof(hash_node_t)), *current_node;

	if (ht == NULL || key == NULL || value == NULL || strlen(key) == 0
	|| *key == '\0')
		return (0);
	index = key_index((const unsigned char *) key, ht->size);
	current_node = ht->array[index];
	new_value = strdup(value);
	if (new_value == NULL)
		return (0);
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
