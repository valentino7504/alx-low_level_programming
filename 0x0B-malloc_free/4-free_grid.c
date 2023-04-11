#include <stdlib.h>
/**
 * free_grid - frees up a 2d grid
 * @grid: the grid
 * @height: the height of the grid
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
