#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>

/**
 * print_all - prints specific characters in a format string
 * @format: the string
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	char *str_text;
	int index = 0, status_check;

	va_start(ap, format);
	while (format != NULL && format[index] != '\0')
	{
		switch (*(format + index))
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
			str_text = va_arg(ap, char *);
			if (str_text == NULL)
				str_text = "(nil)";
			printf("%s", str_text);
			status_check = 0;
			break;
		default:
			status_check = 1;
			break;
		}
		if (status_check == 0 && *(format + index + 1) != '\0')
			printf(", ");
		index++;
	}
	printf("\n");
	va_end(ap);
}
