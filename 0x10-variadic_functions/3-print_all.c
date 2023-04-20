#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_all - prints specific characters in a format string
 * @format: the string
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	char *string;
	int i, status_check;

	va_start(ap, format);
	i = 0;
	while (*(format + i) != '\0' && format != NULL)
	{
		switch (*(format + i))
		{
		case 'c':
			printf("%c", va_arg(ap, int));
			status_check = 0;
			break;
		case 'i':
			printf("%d", va_arg(ap, int));
			status_check = 0;
			break;
		case 'f':
			printf("%f", va_arg(ap, double));
			status_check = 0;
			break;
		case 's':
			string = va_arg(ap, char *);
			if (string == NULL)
				string = "(nil)";
			printf("%s", string);
			status_check = 0;
			break;
		default:
			status_check = 1;
			break;
		}
		if (status_check == 0 && *(format + i + 1) != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(ap);
}
