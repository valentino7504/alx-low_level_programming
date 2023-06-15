#include "lists.h"
/**
 * add_dnodeint_end - adds a dll node at the end of the list
 * @head: the head of the list
 * @n: the value of the node
 * Return: the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current_node = *head, *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (*head == NULL)
	{
		*head = new_node;
		(*head)->next = NULL;
		(*head)->prev = NULL;
		return (new_node);
	};
	while (current_node->next != NULL)
		current_node = current_node->next;
	current_node->next = new_node;
	new_node->prev = current_node;
	new_node->next = NULL;
	return (new_node);
}
