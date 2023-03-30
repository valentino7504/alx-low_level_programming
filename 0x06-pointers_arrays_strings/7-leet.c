#include "main.h"
#include "strlen.c"
/**
 * leet_replace - replaces leet characters
 * @c: the character
 */
void leet_replace(char *c)
{
	int i;
	char leet_array[][3] = {{'a', 'A', '4'}, {'e', 'E', '3'}, {'o', 'O', '0'},
		{'t', 'T', '7'}, {'l', 'L', '1'}};

	for (i = 0; i < 5; i++)
	{
		if (*c == leet_array[i][0] || *c == leet_array[i][1])
		{
			*c = leet_array[i][2];
		}
	}
}
/**
 * leet - changes string to leet encoding
 * @s: the string
 * Return: the encoded string
 */
char *leet(char *s)
{
	int i;

	for (i = 0; i < _strlen(s); i++)
	{
		leet_replace(&s[i]);
	}

	return (s);
}
