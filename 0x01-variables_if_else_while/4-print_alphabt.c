#include <stdio.h>
/**
 * main - print alphabet but q and e
 * Return: 0
 */
int main(void)
{
	for (int i = 97; i <= 122; i++)
	{
		if (i == 101 || i == 113)
		{
			continue;
		}
		else
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
