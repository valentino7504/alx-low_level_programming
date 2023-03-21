#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: start point
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (n = n; n <= 98; n++)
		{
			printf("%d", n);
			if (n == 98)
			{
				printf("\n");
			}
			else
			{
				printf(", ");
			}
		}
	}
	else
	{
		for (n = n; n >= 98; n--)
		{
			printf("%d", n);
			if (n == 98)
			{
				printf("\n");
			}
			else
			{
				printf(", ");
			}
		}
	}
}

