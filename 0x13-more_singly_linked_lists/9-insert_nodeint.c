#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a node at an index
 * @head: head of a linked list
 * @idx: the index
 * @n: the value
 * Return: address of the new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *current_node = *head;
	unsigned int count = 0;
	listint_t *new_node = NULL;

	while (current_node != NULL)
	{
		count++;
		current_node = current_node->next;
	}
	current_node = *head;
	if (idx > (count - 1))
		return (NULL);
	for (i = 0; i < (idx - 1); i++)
		current_node = current_node->next;
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = current_node->next;
	current_node->next = new_node;
	return (new_node);
}
