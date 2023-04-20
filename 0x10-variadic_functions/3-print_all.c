#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>

/**
 * print_all - prints specific characters in a format string
 * @format: the string
 */
void print_all(const char * const format, ...)
{
	va_list spc;
	char *str;
	int index = 0, check_stat;

	va_start(spc, format);
	while (format != NULL && format[index] != '\0')
	{
		switch (*(format + index))
		{
		case 'c':
			printf("%c", va_arg(spc, int));
			check_stat = 0;
			break;
		case 'i':
			printf("%d", va_arg(spc, int));
			check_stat = 0;
			break;
		case 'f':
			printf("%f", va_arg(spc, double));
			check_stat = 0;
			break;
		case 's':
			str = va_arg(spc, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s", str);
			check_stat = 0;
			break;
		default:
			check_stat = 1;
			break;
		}
		if (check_stat == 0 && *(format + index + 1) != '\0')
			printf(", ");
		index++;
	}
	printf("\n");
	va_end(spc);
}
