#include "main.h"
#include "2-strlen.c"
/**
 * _puts - prints a string to stdout
 * @str: the string to be printed
 */
void _puts(char *str)
{
	int i;
	int length = 0;

	for (i = 0; i < _strlen(str); i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
