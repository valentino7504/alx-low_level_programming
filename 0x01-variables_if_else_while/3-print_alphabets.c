#include <stdio.h>
/**
 * main - This functions prints all upper and lower case letters
 * Return: 0 if no errors
 */

int main(void)
{
	int i, j;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	for (j = 65; j <= 90; j++)
	{
		putchar(j);
	}
	putchar('\n');

	return (0);
}
