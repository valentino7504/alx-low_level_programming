#include <stdio.h>
/**
 * main - print alphabet backwards
 * Return: 0
 */
int main(void)
{
	for (int i = 122; i >= 97; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
