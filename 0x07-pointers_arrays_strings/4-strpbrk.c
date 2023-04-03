#include "main.h"
#include "strlen.c"
/**
 * _strpbrk - locates first occurence of a string in another
 * @s: the string to be checked in
 * @accept: the substring
 * Return: the pointer to the rest of the string
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; i < _strlen(s); i++)
	{
		for (j = 0; j < _strlen(accept); j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return ((void *)0);
}
