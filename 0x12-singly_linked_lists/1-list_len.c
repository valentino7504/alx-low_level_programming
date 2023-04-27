#include "lists.h"
/**
 * list_len - returns the length of a linked list
 * @h: the head of the list in question
 * Return: the length of the list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *current_node = h;

	while (current_node != NULL)
	{
		count++;
		current_node = current_node->next;
	}
	return (count);
}
