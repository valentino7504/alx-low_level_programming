#include "main.h"

/**
 * _isdigit - checks if a character is a digit
 * @c: character to be checked
 * Return: 1 if a digit
 */
int _isdigit(int c)
{
	return ((c >= 47 && c <= 57) ? 1 : 0);
}
