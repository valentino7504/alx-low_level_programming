#include "lists.h"
/**
 * add_nodeint_end - adds a node to the end of a linked list
 * @head: the head of the linked list
 * @n: n
 * Return: a pointer to the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current_node = *head;
	listint_t *temp = NULL;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->next = NULL;
	temp->n = n;
	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}
	while (current_node->next != NULL)
		current_node = current_node->next;
	current_node->next = temp;
	return (temp);
}
