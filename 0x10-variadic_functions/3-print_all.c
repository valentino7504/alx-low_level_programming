#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_all - prints different formats
 * @format: the formatted string
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	char *string;
	int i = 0;

	va_start(ap, format);
	while (*(format + i))
	{
		if (*(format + i) == 'c')
		{
			printf("%c", va_arg(ap, int));
		}
		else if (*(format + i) == 'i')
		{
			printf("%d", va_arg(ap, int));
		}
		else if (*(format + i) == 'f')
		{
			printf("%f", va_arg(ap, double));
		}
		else if (*(format + i) == 's')
		{
			string = va_arg(ap, char *);
			if (string == NULL)
				printf("(nil)");
			else
			{
				printf("%s", string);
			}
		}
		else
		{
			i++;
			continue;
		}
		if (*(format + i + 1) != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
}
