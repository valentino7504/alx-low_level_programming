#include <stdlib.h>
#include "strlen.c"
/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * Return: the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int i, new_length, j;
	char *concatenated;

	if (s1 == NULL && s2 != NULL)
	{
		return (s2);
	}
	else if (s1 != NULL && s2 == NULL)
	{
		return (s1);
	}
	else if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	new_length = _strlen(s1) + _strlen(s2) + 1;
	concatenated = malloc(sizeof(char) * new_length);
	if (concatenated == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < _strlen(s1); i++)
	{
		concatenated[i] = s1[i];
	}
	for (j = 0; j < _strlen(s2); j++)
	{
		concatenated[i + j] = s2[j];
	}
	concatenated[i + j] = '\0';
	return (concatenated);
}
