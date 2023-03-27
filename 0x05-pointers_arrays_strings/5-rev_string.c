#include "main.h"
#include "2-strlen.c"
/**
 * rev_string - reverses a string
 * @s: the string to be reversed
 */

void rev_string(char *s)
{
	int length = _strlen(s);
	char *reverse;
	int i;

	for (i = 0; i < length; i++)
	{
		reverse[length - 1 - i] = s[i];
	}
	s = reverse;
}
