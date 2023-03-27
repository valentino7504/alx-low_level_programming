#include "main.h"
#include "2-strlen.c"
/**
 * rev_string - reverses a string
 * @s: the string to be reversed
 */

void rev_string(char *s)
{
	int length = _strlen(s);
	int i;
	char temp;

	for (i = 0; i < (length / 2); i++)
	{
		temp = s[i];
		s[i] = s[length - 1 - i];
		s[length - 1 - i] = temp;
	}
}
