#include <stdio.h>
/**
 * main - This functions prints all upper and lower case letters
 * Return: 0 if no errors
 */

int main(void)
{
	for (int i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	for (int j = 65; j <= 90; j++)
	{
		putchar(j);
	}
	putchar('\n');

	return (0);
}
