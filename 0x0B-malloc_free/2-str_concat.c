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
	int s1_length, s2_length;

	if (s1 == NULL)
	{
		s1_length = 0;
	}
	else
	{
		s1_length = _strlen(s1);
	}
	if (s2 == NULL)
	{
		s2_length = 0;
	}
	else
	{
		s2_length = _strlen(s2);
	}
	new_length = s1_length + s2_length + 1;
	concatenated = malloc(sizeof(char) * new_length);
	if (concatenated == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < s1_length; i++)
	{
		concatenated[i] = s1[i];
	}
	for (j = 0; j < s2_length; j++)
	{
		concatenated[i + j] = s2[j];
	}
	concatenated[i + j] = '\0';
	return (concatenated);
}
