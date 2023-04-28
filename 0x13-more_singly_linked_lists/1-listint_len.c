#include "lists.h"
/**
 * listint_len - returns the length of an integer linked list
 * @h: the linked list
 * Return: the length of the list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *current_node = h;
	size_t count = 0;

	while (current_node != NULL)
	{
		count++;
		current_node = current_node->next;
	}
	return (count);
}
