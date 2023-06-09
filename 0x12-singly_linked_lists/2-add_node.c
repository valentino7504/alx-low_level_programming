#include "lists.h"
/**
 * add_node - adds a node to a linked list
 * @head: the head of the list
 * @str: the string content of the node
 * Return: a pointer to the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp = NULL;
	unsigned int count = 0;

	while (str[count])
		count++;
	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	temp->len = count;
	temp->next = *head;
	*head = temp;
	return (temp);
}
