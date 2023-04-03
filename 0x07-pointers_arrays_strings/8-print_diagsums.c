#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print sums of diagonals of a square matrix
 * @a: the matrix
 * @size: the size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	unsigned int diag1_sum = 0;
	unsigned int diag2_sum = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (j == i)
			{
				diag1_sum += a[(i * size) + j];
			}
			if (i == size - j - 1)
			{
				diag2_sum += a[(i * size) + j];
			}
		}
	}
	printf("%u, %u\n", diag1_sum, diag2_sum);
}
