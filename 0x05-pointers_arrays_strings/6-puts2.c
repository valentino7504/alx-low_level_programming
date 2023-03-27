#include "main.h"
#include "2-strlen.c"
/**
 * puts2 - prints only even positions in the string
 * @str: the string to be checked
 */
void puts2(char *str)
{
	int length = _strlen(str);
	int i;

	for (i = 0; i < length; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
