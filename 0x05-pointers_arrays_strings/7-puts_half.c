#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - prints second half of a string
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int length = _strlen(str);
	int n, i;

	if (length % 2 == 0)
	{
		n = length / 2;
	}
	else
	{
		n = (length - 1) / 2;
	}

	for (i = n; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
