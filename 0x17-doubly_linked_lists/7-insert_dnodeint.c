#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a node in a dll at an index
 * @h: the head of the dll
 * @idx: the index to insert the node
 * @n: the integer value of the node
 * Return: the address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current_node = *h, *new_node;
	unsigned int count = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));
	if (*h == NULL)
		return (NULL);
	while (current_node->next)
	{
		count++;
		if (count == idx)
		{
			new_node = malloc(sizeof(dlistint_t));
			if (new_node == NULL)
				return (NULL);
			new_node->n = n;
			new_node->next = current_node->next;
			current_node->next->prev = new_node;
			new_node->prev = current_node;
			current_node->next = new_node;
			return (new_node);
		}
		current_node = current_node->next;
	}
	if (count == idx - 1)
		return (add_dnodeint_end(h, n));
	return (NULL);
}
