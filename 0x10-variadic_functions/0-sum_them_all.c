#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - sums up a number of integers
 * @n: the number of integers to print
 * Return: the sum of the integers passed
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list ap;

	if (n == 0)
	{
		return (0);
	}
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
