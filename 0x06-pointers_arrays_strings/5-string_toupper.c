#include "main.h"
#include "strlen.c"
/**
 * string_toupper - converts letters in a string to uppercase
 * @s: string to make uppercase
 * Return: the uppercase string
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; i < _strlen(s); i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] -= 32;
		}
	}
	return (s);
}
