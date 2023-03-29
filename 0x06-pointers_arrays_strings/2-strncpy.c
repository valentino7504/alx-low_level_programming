#include "main.h"
#include "strlen.c"

/**
 * _strncpy - copies n bytes from source to destination
 * @dest: the destination
 * @src: the source string
 * @n: the number of bytes to copy
 * Return: the copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int length = _strlen(src);

	for (i = 0; i < n; i++)
	{
		if (src[i] == '\0')
		{
			break;
		}
		dest[i] = src[i];
	}
	for (i = i; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
