#include "main.h"
/**
 * _strlen - find the length of a string
 * @s: the string
 * Return: the length of the string
 */
unsigned int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
