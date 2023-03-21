#include "main.h"

/**
 * print_sign - prints sign of the number
 * @n: number to be checked
 * Return: -1, 0, 1 if it is -ve, 0 or +ve resp.
 */

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}