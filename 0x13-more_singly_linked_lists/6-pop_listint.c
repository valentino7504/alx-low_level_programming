#include "lists.h"
/**
 * pop_listint - pops th head element of a linked list
 * and returns its value
 * @head: the head of the linked list
 * Return: the head's value or 0
 */
int pop_listint(listint_t **head)
{
	int value = 0;
	listint_t *node = *head;

	if (*head == NULL || head == NULL)
		return (0);
	value = (*head)->n;
	if ((*head)->next == NULL)
	{
		free(*head);
	}
	else
	{
		*head = node->next;
		free(node);
	}
	return (value);
}
