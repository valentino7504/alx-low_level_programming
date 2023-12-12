#include "search_algos.h"
/**
 * linear_search - searches for an element in an array by linear
 * method
 * @array: the array
 * @size: the size of the array
 * @value: the value to be searched for
 * Return: The index
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
