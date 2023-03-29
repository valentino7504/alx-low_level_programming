#include "main.h"
#include "strlen.c"
/**
 * _strcat - concatenates strings
 * @dest: the destination string
 * @src: the source string
 * Return: the concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int i, j, k;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[k] != '\0')
	{
		k++;
	}
	for (j = 0; j < k; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
}
