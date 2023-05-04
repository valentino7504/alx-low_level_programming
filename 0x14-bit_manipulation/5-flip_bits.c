#include "main.h"
/**
 * flip_bits - checks the number of bits to be flipped to to get m from n
 * @n: the first number
 * @m: the second number
 * Return: the number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flipped = n ^ m;
	int i = 0;
	unsigned int flipped_bits = 0;

	for (i = 0; i < (int)(sizeof(unsigned long int) * 8); i++)
	{
		if ((flipped >> i) & 1)
			flipped_bits++;
	}
	return (flipped_bits);
}
