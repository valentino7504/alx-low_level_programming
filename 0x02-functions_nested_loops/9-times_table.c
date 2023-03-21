#include "main.h"

/**
 * times_table - print times table from 0 to 9
 */

void times_table(void)
{
	int i, j, product;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			product = j * i;
			if (product < 10)
			{
				_putchar(product + '0');
			}
			else
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
				if ((j + 1) * i < 10)
				{
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
