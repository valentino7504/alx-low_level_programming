#include "search_algos.h"
/**
 * binary_search - searches for an element in an array by binary
 * method
 * @array: the array
 * @size: the size of the array
 * @value: the value to be searched for
 * Return: The index
*/
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0, high = size - 1, low = 0, mid;

	if (array == NULL)
		return (-1);
	while (low <= high)
	{
		mid = (low + high) / 2;
		printf("Searching in array: ");
		for (i = low; i < high; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}
