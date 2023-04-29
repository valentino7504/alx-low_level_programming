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
		free(*head);
		*head = current_node->next;
	}
	*head = NULL;
}
