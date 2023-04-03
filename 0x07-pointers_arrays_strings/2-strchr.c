#include "main.h"
#include "strlen.c"
/**
 * _strchr - returns the first occurence of a character in a string
 * @s: the string
 * @c: the character
 * Return: the first occurence of c
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	int index = _strlen(s);

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			index = i;
			return (s + index);
		}
		i++;
	}
	return ((void *)0);
}
