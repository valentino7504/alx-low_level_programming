#include "lists.h"
/**
 * dlistint_len - returns the length of a doubly
 * linked list
 * @h: the head of the doubly linked list
 * Return: the length of the DLL
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current_node = h;
	size_t length = 0;

	while (current_node)
	{
		length++;
		current_node = current_node->next;
	}
	return (length);
}
