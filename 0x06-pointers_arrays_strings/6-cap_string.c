#include "main.h"
#include "strlen.c"

/**
 * check_char - checks if a character is a separator
 * @c: the character to check
 * Return: 1 if it is and 0 if not
 */
int check_char(char c)
{
	int i;
	char delimiters[] = {' ', '\t', '\n', ',', ';', '.',
		'?', '"', '!', '(', ')', '{', '}', '\0'};

	for (i = 0; i < _strlen(delimiters); i++)
	{
		if (delimiters[i] == c)
		{
			return (1);
		}
	}
	return (0);
}

/**
 * cap_string - capitalises first letters of a string
 * @s: the string
 * Return: the capitalised string
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; i <= _strlen(s); i++)
	{
		if (s[i] >= 97 && s[i] <= 122 && check_char(s[i - 1]))
		{
			s[i] -= 32;
		}
	}
	return (s);
}

