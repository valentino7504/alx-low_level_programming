#include "lists.h"
/**
 * add_node_end - adds a node to the end of a linked list
 * @head: the head of the linked list
 * @str: the string content of the new item
 * Return: the address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = NULL;
	list_t *current_node = *head;
	unsigned int count = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->next = NULL;
	new->str = strdup(str);
	while (str[count])
		count++;
	new->len = count;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (current_node->next != NULL)
		current_node = current_node->next;
	current_node->next = new;
	return (new);
}
