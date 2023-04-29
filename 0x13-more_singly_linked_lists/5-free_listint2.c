#include "lists.h"
/**
 * free_listint2 - frees a list of integers
 * @head: the head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *current_node = *head;

	if (head == NULL)
		return;
	current_node = current_node->next;
	while (*head != NULL)
	{
		current_node = *head;
		*head = current_node->next;
		free(current_node);
	}
	*head = NULL;
}
