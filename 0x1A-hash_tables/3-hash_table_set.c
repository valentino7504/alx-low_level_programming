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
	unsigned long int index = key_index((unsigned char *) key, ht->size);
	hash_node_t *new_node = malloc(sizeof(hash_node_t)), *current_node;

	if (strlen(key) == 0 || new_node == NULL || !key || !value)
		return (0);
	new_node->key = strdup(key);
	if (new_node->key == NULL)
		return (0);
	new_node->value = strdup(value);
	if (new_node->value == NULL)
		return (0);
	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node;
		new_node->next = NULL;
		return (1);
	}
	current_node = ht->array[index];
	while (current_node != NULL)
	{
		if (strcmp(current_node->key, new_node->key) == 0)
		{
			current_node->value = strdup(new_node->value);
			if (current_node->value == NULL)
				return (0);
			free(new_node->key);
			free(new_node->value);
			free(new_node);
			return (1);
		}
		current_node = current_node->next;
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
