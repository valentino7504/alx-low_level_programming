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
	int i = _strlen(dest);
	int j = 0;

	for (j = 0; j < strlen(src); j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
}
