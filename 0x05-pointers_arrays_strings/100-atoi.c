#include "main.h"
#include "2-strlen.c"

/**
 * _atoi - converts a string to an integer
 * @s: the string
 * Return: the integer
 */
int _atoi(char *s)
{
	int i = 0;
	int length = _strlen(s);
	int digit = 0;
	int number = 0;
	int sign = 0;

	while (i < length)
	{
		if (s[i] == '-' && number == 0)
		{
			sign++;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			number = number * 10 + digit;
			if (s[i+1] < '0' || s[i+1] > '9')
			{
				break;
			}
		}
		i++;
	}

	if (sign % 2 != 0)
	{
		digit *= -1;
	}
	return (number);
}
