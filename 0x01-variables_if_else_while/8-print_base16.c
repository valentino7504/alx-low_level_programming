#include <stdio.h>
/**
 * main - Print hex characters
 * Return: 0
 */
int main(void)
{
	for (int i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	for (int i = 97; i <= 102; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
