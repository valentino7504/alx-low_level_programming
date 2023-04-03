#include "main.h"
#include "strlen.c"

/**
 * _strstr - finds the first occurrence of the needle in the haystack
 * @haystack: the haystack to be checked
 * @needle: the needle string to be found
 * Return: pointer to incidence
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; i < _strlen(haystack); i++)
	{
		for (j = 0; needle[j] && haystack[i + j] == needle[j]; j++)
			;
		if (!needle[j])
			return (haystack + i);
	}
	return ((void *)0);
}
