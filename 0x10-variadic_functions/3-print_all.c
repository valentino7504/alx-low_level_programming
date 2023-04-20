#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_char - prints char
 * @ap: list
 */
void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}
/**
 * print_int - prints int
 * @ap: list
 */
void print_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}
/**
 * print_float - prints float
 * @ap: list
 */
void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}
/**
 * print_str - prints string
 * @ap: list
 */
void print_str(va_list ap)
{
	char *str;

	str = va_arg(ap, char *);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}
/**
 * print_all - prints different operations
 * @format: the format
 */
void print_all(const char * const format, ...)
{
	int i, j;
	fmt_t operations[] = {
		{"c", print_char},
		{"s", print_str},
		{"f", print_float},
		{"i", print_int},
		{NULL, NULL}
	};
	va_list ap;
	char *first_sep = "";
	char *second_sep = ", ";

	va_start(ap, format);
	i = 0;
	while (format != NULL && *(format + i))
	{
		j = 0;
		while (operations[j].op != NULL)
		{
			if (*(format + i) == *(operations[j].op))
			{
				printf("%s", first_sep);
				operations[j].print_func(ap);
			}
			j++;
		}
		first_sep = second_sep;
		i++;
	}
	printf("\n");
	va_end(ap);
}
