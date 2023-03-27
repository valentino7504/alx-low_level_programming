#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - prints second half of a string
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int length = _strlen(str);
	int i;
	int odd_even = 0;

	if (length % 2 == 0)
	{
		odd_even++;
	}
	for (i = (length + odd_even) / 2; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
