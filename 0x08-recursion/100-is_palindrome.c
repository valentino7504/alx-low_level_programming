#include "main.h"
#include "strlen.c"
/**
 * palindrome_helper - helper function
 * @s: the string to be checked
 * @i: the index to be checked
 * @n: the length of the string
 */
int palindrome_helper(char *s, int i, int n)
{
	if (i > (n / 2))
	{
		return (1);
	}
	else if (s[i] == s[n - 1 - i])
	{
		return (palindrome_helper(s, i + 1, n));
	}
	else
	{
		return (0);
	}
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to be checked
 * Return: 1 if a string is palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	return(palindrome_helper(s, 0, _strlen(s)));
}
