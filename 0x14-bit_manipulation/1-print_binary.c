#include "main.h"
/**
 * print_binary - prints the binary number
 * @n: the number in base 10
 */
void print_binary(unsigned long int n)
{
	int flag = 0, i = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (i = (int) sizeof(unsigned long int) * 8; i > 0; i--)
	{
		if (n >> (i - 1) != 0)
			flag = 1;
		if (flag == 1)
			_putchar(((n >> (i - 1)) & 1) + 48);
	}
}
