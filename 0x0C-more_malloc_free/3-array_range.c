#include <stdlib.h>
/**
 * array_range - creates an array of ints from min to max
 * @min: the first elemnt of the array
 * @max: the last element of the array
 * Return: a pointer to the array or NULL
 */
int *array_range(int min, int max)
{
	int i = min;
	int j, array_size;
	int *range;

	if (max < min)
	{
		return (NULL);
	}
	array_size = max - min + 1;
	range = malloc(sizeof(int) * array_size);
	if (range == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < array_size; j++)
	{
		range[j] = i;
		i++;
	}
	return (range);
}
