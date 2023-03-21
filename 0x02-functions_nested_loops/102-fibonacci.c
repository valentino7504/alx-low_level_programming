#include <stdio.h>

/**
 * fibonacci - gets fibonacci number
 * @n: the position in fibonacci series
 * Return: the fibonacci number
 */
long int fibonacci(long int n)
{
	if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (fibonacci(n - 2) + fibonacci(n - 1));
	}
}

/**
 * main - main function for fibonacci
 * Return: 0
 */
int main(void)
{
	long int i;

	for (i = 1; i <= 50; i++)
	{
		printf("%ld", fibonacci(i));
		if (i != 50)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
