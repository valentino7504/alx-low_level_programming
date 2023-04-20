#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * print_all - prints specific characters in a format string
 * @format: the string
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	char *string;
	int i = 0;

	va_start(ap, format);
	while (*(format + i))
	{
		switch (*(format + i))
		{
		case 'c':
			printf("%c", va_arg(ap, int));
			break;
		case 'i':
			printf("%d", va_arg(ap, int));
			break;
		case 'f':
			printf("%f", va_arg(ap, double));
			break;
		case 's':
			string = va_arg(ap, char *);
			if (string == NULL)
			{
				printf("(nil)");
				if (*(format + i + 1) != '\0')
					printf(", ");
				i++;
				continue;
			}
			printf("%s", string);
			break;
		default:
			i++;
			continue;
		}
		if (*(format + i + 1) != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
}
