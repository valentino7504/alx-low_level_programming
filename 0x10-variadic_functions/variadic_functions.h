#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
int sum_them_all(const unsigned int, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char *format, ...);
void print_char(va_list ap);
void print_int(va_list ap);
void print_float(va_list ap);
void print_str(va_list ap);
/**
 * struct formats - operation structure
 *
 * @op: the operator
 * @print_func: the function associated
 */
typedef struct formats
{
	char *op;
	void (*print_func)(va_list ap);
} fmt_t;
#endif
