#include "lists.h"
#include "strlen.c"
/**
 * add_node - adds a node to a linked list
 * @head: the head of the list
 * @str: the string content of the node
 * Return: a pointer to the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp = NULL;

	temp = malloc(sizeof(list_t));
	temp->str = strdup(str);
	temp->len = _strlen_const(temp->str);
	temp->next = *head;
	*head = temp;
	return (*head);
}
