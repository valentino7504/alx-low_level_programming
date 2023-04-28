#include "lists.h"
/**
 * print_listint - prints out a linked list of ints
 * @h: the list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *current_node = h;
	size_t count = 0;

	while (current_node != NULL)
	{
		printf("%d\n", current_node->n);
		current_node = current_node->next;
		count++;
	}
	return (count);
}
