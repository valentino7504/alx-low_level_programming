#include "main.h"

/**
 * _isdigit - checks if a character is a digit
 * @c: character to be checked
 * Return: 1 if a digit
 */
int _isdigit(int c)
{
	int return_value = (c >= 48 && c <= 57) ? 1 : 0;
	return (return_value);
}
