#include "main.h"
#include "2-strlen.c"

/**
 * _atoi - converts a string to an integer
 * @s: the string
 * Return: the integer
 */
int _atoi(char *s)
{
	int i, digits;
	int power = 1;
	int positive = 0;
	int number = 0;
	int length = _strlen(s);

	for (i = 0; i < length; i++)
	{
		if (!(s[i] >= '0' && s[i] <= '9') && digits > 0)
		{
			break;
		}
		else if (s[i] == '-')
		{
			positive--;
		}
		else if (s[i] == '+')
		{
			positive++;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			digits++;
		}
	}
	while (digits > 0)
	{
		number += (s[i - 1] - '0') * power;
		power *= 10;
		i--;
		digits--;
	}
	if (positive < 0)
	{
		number *= -1
	}

	return (number)
}
