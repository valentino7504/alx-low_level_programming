#include "lists.h"
/**
 * sum_listint - sums the values in a list of ints
 * @head: the head of the linked list
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
	listint_t *current_node = head;
	int sum = 0;

	while (current_node != NULL)
	{
		sum += current_node->n;
		current_node = current_node->next;
	}
	return (sum);
}
