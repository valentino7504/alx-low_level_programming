#include "main.h"

/**
 * _memcpy - copies n bytes from src to dest
 * @dest: the destination string
 * @src: the source string
 * @n: the number of bytes to be copied
 * Return: the destination string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = src[i];
	}

	return (dest);
}
