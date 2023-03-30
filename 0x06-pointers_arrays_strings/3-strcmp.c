#include "main.h"
#include "strlen.c"

/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: the difference between the two
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}

	if (_strlen(s1) != _strlen(s2))
	{
		return (s1[i] - s2[i]);
	}
	return (0);
}
