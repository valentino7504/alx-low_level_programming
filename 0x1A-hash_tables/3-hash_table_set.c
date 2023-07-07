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
	unsigned long int index = key_index((const unsigned char *) key, ht->size), i;
	char *new_value;
	hash_node_t *new_node = malloc(sizeof(hash_node_t));

	if (ht == NULL || key == NULL || value == NULL || strlen(key) == 0)
		return (0);
	new_value = strdup(value);
	if (new_value == NULL)
		return (0);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = new_value;
			return (1);
		}
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
