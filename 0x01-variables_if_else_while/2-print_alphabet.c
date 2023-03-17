#include <stdio.h>

/**
 * main - Function prints all characters from a - z
 * Return: 0 if no errors
 */

int main(void)
{
	for (int i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
