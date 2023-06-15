#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes a dlist node
 * @head: the head of the dll
 * @index: the index at which to delete
 * Return: 1 if successful, 0 if not
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current_node, *prev_node, *next_node;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);
	current_node = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(current_node);
		return (1);
	}
	prev_node = current_node;
	current_node = current_node->next;
	next_node = current_node->next;
	count++;
	while (current_node)
	{
		if (count == index)
		{
			prev_node->next = next_node;
			if (next_node)
				next_node->prev = prev_node;
			free(current_node);
			return (1);
		}
		count++;
		prev_node = current_node;
		current_node = current_node->next;
		next_node = current_node->next;
	}
	return (-1);
}
