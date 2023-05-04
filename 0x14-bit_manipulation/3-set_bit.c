#include "main.h"
/**
 * set_bit - sets the bit at a partciular index in a number to 1
 * @n: the number
 * @index: the index of the bit to change
 * Return: 1 if the change was successful else -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8) - 1)
		return (-1);
	*n += 1 << index;
	return (1);
}
