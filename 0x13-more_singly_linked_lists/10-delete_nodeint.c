#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a linked list node at
 * a particular index
 * @head: the head of the linked list
 * @index: the index of the node
 * Return: 1 if successful, -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *prev_node;
	listint_t *current_node;

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
	i++;
	while (current_node != NULL)
	{
		if (i == index)
		{
			prev_node->next = current_node->next;
			free(current_node);
			return (1); 
		}
		prev_node = current_node;
		current_node = current_node->next;
		i++;
	}
	return (-1);
}
