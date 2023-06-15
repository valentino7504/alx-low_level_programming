#include "lists.h"
/**
 * get_dnodeint_at_index - gets a node at a particular index
 * in doubly linked list
 * @head: the head of the list
 * @index: the index to get the value
 * Return: the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *current_node = head;

	while (current_node)
	{
		if (count == index)
			return (current_node);
		current_node = current_node->next;
		count++;
	}
	return (NULL);
}
