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
	hash_node_t *new_node;

	if (strlen(key) == 0)
		return (0);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = malloc(sizeof(char *));
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	strcpy(new_node->key, key);
	new_node->value = malloc(sizeof(char *));
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	strcpy(new_node->value, value);
	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node;
		new_node->next = NULL;
		return (1);
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
