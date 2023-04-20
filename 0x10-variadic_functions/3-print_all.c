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
	char current;

	va_start(ap, format);
	while (*(format + i))
	{
		current = *(format + i);
		if (current != 'c' && current != 'i'
		&& current != 'f' && current != 's')
		{
			i++;
			continue;
		}
		if (*(format + i) == 'c')
			printf("%c", va_arg(ap, int));
		if (*(format + i) == 'i')
			printf("%d", va_arg(ap, int));
		if (*(format + i) == 'f')
			printf("%f", va_arg(ap, double));
		if (*(format + i) == 's')
		{
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
		}
		if (*(format + i + 1) != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
}
