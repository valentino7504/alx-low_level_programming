#include "hash_tables.h"
/**
 * hash_table_print - prints hash table
 * @ht: the hash_table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current_node;
	unsigned long int i, j, flag = 0, next_index;

	if (ht == NULL)
		return;
	printf("{");
	i = 0;
	while (i < ht->size)
	{
		flag = 0;
		current_node = ht->array[i];
		while (current_node != NULL)
		{
			printf("'%s': '%s'", current_node->key, current_node->value);
			current_node = current_node->next;
		}
		for (j = i + 1; j < ht->size; j++)
		{
			if (ht->array[j] != NULL)
			{
				next_index = j;
				flag = 1;
				break;
			}
		}
		if (flag == 1)
		{
			if (ht->array[i] != NULL)
				printf(", ");
			i = next_index;
		}
		else
			break;
	}
	printf("}\n");
}
