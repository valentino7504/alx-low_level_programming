#include "main.h"
/**
 * sqrt_helper - helper function for sqrt
 * @num: the number
 * @start: start point
 * Return: the square root
 */
int sqrt_helper(int num, int start)
{
	if (start * start > num)
	{
		return (-1);
	}
	else if (start * start == num)
	{
		return (start);
	}
	else
	{
		return (sqrt_helper(num, start + 1));
	}
}

/**
 * _sqrt_recursion - calculate square root of a number recursively
 * @n: the number
 * Return: the square root
 */
int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (sqrt_helper(n, 1));
}
