#include "lists.h"
/**
 * print_list - prints the contents of a linked list
 * @h: the list
 * return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *current_node = h;
	char *printed_str;
	unsigned int length;

	while (current_node != NULL)
	{
		printed_str = current_node->str;
		length = current_node->len;
		if (printed_str == NULL)
		{
			length = 0;
			printed_str = "(nil)";
		}
		printf("[%d] %s\n", length, printed_str);
		current_node = current_node->next;
		count++;
	}
	return (count);
}
