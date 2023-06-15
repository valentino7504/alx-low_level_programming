#include "lists.h"
/**
 * print_dlistint - prints a doubly linked list
 * @h: the head of the linked list
 * Return: the size of the linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current_node = h;
	size_t node_count = 0;

	while (current_node != NULL)
	{
		node_count++;
		printf("%d\n", current_node->n);
		current_node = current_node->next;
	}
	return (node_count);
}
