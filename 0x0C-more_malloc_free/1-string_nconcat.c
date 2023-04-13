#include <stdlib.h>
#include "strlen.c"
/**
 * string_nconcat - used to concatenate two strings
 * @s1: the first string
 * @s2: the second string
 * @n: the number of bytes from the second string needed
 * Return: the conactenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int length1, length2;
	char *concatenated;
	int i, j;

	length1 = s1 == NULL ? 0 : _strlen(s1);
	length2 = s2 == NULL ? 0 : (_strlen(s2) <= n ? _strlen(s2) : n);
	concatenated = malloc(sizeof(char) * (length1 + length2 + 1));
	if (concatenated == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < length1; i++)
	{
		concatenated[i] = s1[i];
	}
	for (j = 0; j < length2; j++)
	{
		concatenated[i + j] = s2[j];
	}
	concatenated[i + j] = '\0';
	return (concatenated);
}
