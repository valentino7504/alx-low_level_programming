#include "main.h"
/**
 * check_prime - checks if a number is prime
 * @n:  the number to check
 * @i: the divisor
 * Return: 1 if prime
 */
int check_prime(int n, int i)
{
	if (i > (n / 2))
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (check_prime(n, i + 1));
	}
}

/**
 * is_prime_number - checks if a number is prime
 * @n: the number
 * Return: 1 if prime and 0 if not
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	else
	{
		return (check_prime(n, 2));
	}
}
