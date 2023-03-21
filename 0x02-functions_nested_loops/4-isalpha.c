#include "main.h"

/**
 * _isalpha - checks if the number is a letter
 * @c: character to be checked
 * Return: 1 if the character is a letter
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) ||
			(c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
