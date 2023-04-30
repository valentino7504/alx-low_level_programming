#include "lists.h"
/**
 * get_nodeint_at_index - gets the node at a certain index
 * @head: the head of the linked list
 * @index: index of the node starting at 0
 * Return: the node at the index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current_node = head;
	unsigned int count = 0;

	while (current_node != NULL)
	{
		count++;
		current_node = current_node->next;
	}
	if (index > (count - 1))
		return (NULL);
	current_node = head;
	for (i = 0; i < index; i++)
		current_node = current_node->next;
	return (current_node);
}
