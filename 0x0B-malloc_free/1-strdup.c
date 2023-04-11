#include <stdlib.h>
#include "strlen.c"
/**
 * _strdup - copies a string
 * @str: the string to copy
 * Return: NULL or a pointer to the string
 */
char *_strdup(char *str)
{
	int length;
	int i = 0;
	char *copy;

	if (str == NULL)
	{
		return (NULL);
	}
	length = _strlen(str);
	copy = malloc((sizeof(char) * length) + 1);
	if (copy == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= length; i++)
	{
		copy[i] = str[i];
	}
	return (copy);
}
