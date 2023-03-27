#include "main.h"
#include "2-strlen.c"

/**
 * print_rev - prints a string in reverse
 * @s: the string to be reversed
 */
void print_rev(char *s)
{
	int i;
	int length = _strlen(s);

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
