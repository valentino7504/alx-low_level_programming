#include <stdio.h>
/**
 * main - print all single digit numbers
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i == 57)
		{
			putchar('\n');
			continue;
		}
		else
		{
			putchar(44);
			putchar(' ');
		}
	}

	return (0);
}
