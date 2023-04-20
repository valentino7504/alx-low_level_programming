#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_comma - prints a comma
 * @character: the character to be checked
 */
void print_comma(char character)
{
	if (character != '\0')
		printf(", ");
}
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
	while (*(format + i) && format != NULL)
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
				print_comma(*(format + i + 1));
				i++;
				continue;
			}
			printf("%s", string);
			break;
		default:
			i++;
			continue;
			break;
		}
		print_comma(*(format + i + 1));
		i++;
	}
	printf("\n");
}
