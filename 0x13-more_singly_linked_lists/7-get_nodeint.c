#include "lists.h"
/**
 * get_nodeint_at_index - gets the node at a certain index
 * @head: the head of the linked list
 * @index: index of the node starting at 0
 * Return: the node at the index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *current_node = head;

	for (i = 0; i <= index; i++)
	{
		if (current_node == NULL && i < index)
		{
			return (NULL);
		}
		else
		{
			current_node = current_node->next;
		}
	}
	return (current_node);
}
