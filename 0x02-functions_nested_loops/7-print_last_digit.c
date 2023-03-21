#include "main.h"

/**
 * print_last_digit - prints last didgit of a number
 * @n: number to be checked
 * Return: last digit
 */

int print_last_digit(int n)
{
	int digit = n % 10;
	digit = digit < 0 ? (digit * -1) : (digit);
	_putchar(digit + '0');
	return (digit);
}
