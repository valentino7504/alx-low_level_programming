#include "hash_tables.h"
/**
 * hash_table_print - prints hash table
 * @ht: the hash_table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current_node;
	unsigned long int i;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] == NULL)
			continue;
		if (i > 0 && ht->array[i] != NULL)
			printf(", ");
		current_node = ht->array[i];
		while (current_node != NULL)
		{
			printf("'%s': '%s'", current_node->key, current_node->value);
			current_node = current_node->next;
			if (current_node != NULL)
				printf(", ");
		}
	}
	printf("}\n");
}
