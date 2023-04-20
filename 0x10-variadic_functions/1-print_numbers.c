#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers to the screen
 * @separator: the separator between numbers
 * @n: the number of inputs
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	int number;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		number = va_arg(ap, int);
		printf("%i", number);
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap);
}
