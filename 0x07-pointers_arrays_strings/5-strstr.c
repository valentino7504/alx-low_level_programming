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
	int i, j, flag;

	for (i = 0; i < _strlen(haystack); i++)
	{
		flag = 0;
		if (haystack[i] == needle[0])
		{
			for (j = 0; j < _strlen(needle); j++)
			{
				if (needle[j] == haystack[i + j])
				{
					flag = 1;
				}
				else
				{
					flag = 0;
					break;
				}
			}
		}
		if (j == _strlen(needle) && flag == 1)
		{
			return (haystack + i);
		}
	}
	return ((void *)0);
}
