#include <stdlib.h>
/**
 * int_index - returns the index of the first element which cmp != 0
 * @array: the array to check
 * @size: the size of the array
 * @cmp: the checking function
 * Return: the index of the first valid element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
