#include "lists.h"
/**
 * free_listint - fress a list of integers
 * @head: the head of the list
 */
void free_listint(listint_t *head)
{
	listint_t *current_node = head;
	listint_t *next_node;

	while (current_node != NULL)
	{
		next_node = current_node->next;
		free(current_node);
		current_node = next_node;
	}
}
