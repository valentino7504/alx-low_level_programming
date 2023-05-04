#include "main.h"
/**
 * clear_bit - sets a particular bit in a number to 0
 * @n: the number
 * @index: the index of the ibt to be cleared
 * Return: 1 if succesful, 0 if not
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8) - 1)
		return (-1);
	if (((*n >> index) & 1) == 0)
		return (1);
	*n -= 1 << index;
	return (1);
}
