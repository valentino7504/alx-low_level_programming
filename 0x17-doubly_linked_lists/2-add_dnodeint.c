#include "lists.h"
/**
 * add_dnodeint - adds a node at beginning of dll
 * @head: the head of the list
 * @n: the new value
 * Return: the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (*head == NULL)
	{
		*head = new_node;
		new_node->prev = NULL;
		new_node->next = NULL;
		return (new_node);
	}
	(*head)->prev = new_node;
	new_node->prev = NULL;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
