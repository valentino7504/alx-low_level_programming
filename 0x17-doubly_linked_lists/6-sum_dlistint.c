#include "lists.h"
/**
 * sum_dlistint - sums a dll
 * @head: the head of the linked list
 * Return: the sum of the linked list
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current_node = head;
	int sum = 0;

	while (current_node)
	{
		sum += current_node->n;
		current_node = current_node->next;
	}
	return (sum);
}
