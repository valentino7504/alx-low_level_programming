#include "main.h"
#include "2-strlen.c"

/**
 * _strcpy - to copy a string
 * @dest: destination string
 * @src: source string
 * Return: the final string
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i < _strlen(src); i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
