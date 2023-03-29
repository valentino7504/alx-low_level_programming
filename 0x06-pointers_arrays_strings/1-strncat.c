#include "main.h"
#include "strlen.c"

/**
 * _strncat - concatenates src to dest with n bytes
 * @dest: the destination
 * @src: the source
 * @n: the number of bytes
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int dest_len = _strlen(dest);


	for (i = 0; i < n; i++)
	{
		dest[dest_len + i] = src[i];
		if (src[i] == '\0')
		{
			break;
		}
	}
	return (dest);
}
