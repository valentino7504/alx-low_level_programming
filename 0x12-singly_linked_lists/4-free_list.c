#include "lists.h"
/**
 * free_list - frees up a singly linked list
 * @head: the head of the list
 */
void free_list(list_t *head)
{
	list_t *current_node = head;
	list_t *next_node = head->next;

	while (current_node)
	{
		next_node = current_node->next;
		free(current_node->str);
		free(current_node);
		current_node = next_node;
	}
	free(current_node);
	free(next_node);
}
