#include "main.h"
/**
 * sqrt_helper - helper function for sqrt
 * @num: the number
 * @start: start point
 * @end: the end point
 */
int sqrt_helper(int num, int start, int end)
{
	int mid = (start + end) / 2;

	if (end < start)
	{
		return (-1);
	}
	if (mid * mid == num)
	{
		return (mid);
	}
	else if (mid * mid < num)
	{
		return (sqrt_helper(num, mid + 1, end));
	}
	else
	{
		return (sqrt_helper(num, 1, mid - 1));
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
	return sqrt_helper(n, 1, n);
}
