#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2d array of ints
 * @width: width of the grid
 * @height: height of the grid
 * Return: the grid or NULL
 */
int **alloc_grid(int width, int height)
{
	int **matrix, i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	matrix = malloc(sizeof(int *) * height);
	if (matrix == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		matrix[i] = malloc(sizeof(int) * width);
		if (matrix[i] == NULL)
		{
			free(matrix);
			return (NULL);
		}
	}
	return (matrix);
}
