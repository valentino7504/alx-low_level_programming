#include "main.h"
/**
 * get_bit - gets the bit at a certain index of a number
 * @n: the number
 * @index: the index
 * Return: the value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8) - 1
	|| index < 0)
		return (-1);
	return ((n >> index) & 1);
}
