#include "hash_tables.h"
/**
 * hash_table_create: creates an empty hash table
 * @size: the size of the hash table array
 * Return: a pointer to the new tables
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = malloc(sizeof(hash_table_t));
	
	if (new_table == NULL)
		return (NULL);
	new_table->array = malloc(size * sizeof(hash_node_t));
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}
	return (new_table);
}
