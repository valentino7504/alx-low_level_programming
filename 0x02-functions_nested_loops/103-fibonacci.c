#include <stdio.h>
/**
 * main - main function
 *
 * Return: nothing
 */
int main(void)
{
	long int a = 1;
	long int b = a + 1;
	long int c = a + b;
	int sum = 0;

	while (c < 4000000)
	{
		if (c % 2 == 0)
		{
			sum += c;
		}
		a = b;
		b = c;
		c = a + b;
	}
	printf("%d\n", sum);
	return (0);
}
