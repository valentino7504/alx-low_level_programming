#include "main.h"

/**
 * times_table - print times table from 0 to 9
 * @n: times table to print
 */

void print_times_table(int n)
{
	int i, j, product;

	if (n > 15 || n < 0)
	{
		return;
	}
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			product = j * i;
			if (product < 10)
			{
				_putchar(product + '0');
			}
			else if (product < 100)
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
			else
			{
				_putchar((product / 100) + '0');
				_putchar((product / 10) % 10 + '0');
				_putchar((product % 10) + '0');
			}
			if (j != n)
			{
				_putchar(',');
				_putchar(' ');
				if ((j + 1) * i < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else if ((j + 1) * i < 100)
				{
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
