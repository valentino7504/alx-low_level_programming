#include "main.h"

/**
 * print_number - prints a number
 * @n: the number
 */
void print_number(int n)
{
	int a = (n < 0) ? (-1 * n) : n;
	int number_of_zeros = 0;
	int i, j;
	int divisor = 1;
	
	while (a >= 10)
	{
		a /= 10;
		number_of_zeros += 1;
	}
	a = (n < 0) ? (-1 * n) : n;

	if (n < 0)
	{
		_putchar('-');
	}
	for (i = number_of_zeros; i >= 0; i--)
	{
		divisor = 1;
		for (j = 0; j < i; j++)
		{
			divisor *= 10;
		}
		_putchar((a/divisor) + '0');
		a = a % divisor;
	}
}
