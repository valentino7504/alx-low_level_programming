#include "hash_tables.h"
/**
 * key_index - gets the index of a key
 * @key: the key
 * @size: the size of the hash_table
 * Return: the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value = hash_djb2(key);

	return (hash_value % size);
}
