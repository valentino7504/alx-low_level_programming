#include "lists.h"
/**
 * _strlen - find the length of a string
 * @s: the string
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * _strlen - find the length of a string
 * @s: the string
 * Return: the length of the string
 */
int _strlen_const(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
