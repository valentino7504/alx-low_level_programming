#include <stdlib.h>
/**
 * create_array - creates an array of chars and intialises it with c
 * @size: the size of the array
 * @c: the character
 * Return: pointer to the array or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0;

	if (size == 0)
	{
		return ((void *)0);
	}
	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
	{
		return ((void *)0);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
