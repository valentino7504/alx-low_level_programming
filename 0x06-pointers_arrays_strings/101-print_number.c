#include "main.h"

/**
 * print_number - prints a number
 * @n: number to print
 */
void print_number(int n)
{
	int zeros, i;
	unsigned int n_copy;
	unsigned int divisor = 1;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	n_copy = n;
	while (n_copy >= 10)
	{
		n_copy /= 10;
		zeros++;
	}
	while (zeros > 0)
	{
		divisor = 1;
		for (i = 0; i < zeros; i++)
		{
			divisor *= 10;
		}
		_putchar((n / divisor) + '0');
		n = n % divisor;
		zeros--;
	}
	_putchar((n % 10) + '0');
}
