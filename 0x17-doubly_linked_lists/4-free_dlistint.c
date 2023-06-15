#include "lists.h"
/**
 * free_dlistint - frees a dll
 * @head: the head of the linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current_node = head;
	dlistint_t *next_node = NULL;

	if (head == NULL)
		return;
	if (head->next == NULL)
	{
		free(current_node);
		return;
	}
	next_node = head->next;
	while (next_node)
	{
		next_node = current_node->next;
		free(current_node);
		current_node = next_node;
	}
}
