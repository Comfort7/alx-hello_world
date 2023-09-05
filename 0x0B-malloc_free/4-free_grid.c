#include <stdlib.h>

/**
 * free_grid - Frees a 2-dimensional grid previously created by alloc_grid.
 * @grid: The 2-dimensional grid to be freed.
 * @height: The height (number of rows) of the grid.
 *
 * This function frees the memory allocated for a 2-dimensional grid.
 */
void free_grid(int **grid, int height)
{
	if (grid == NULL || height <= 0)
	{
		return ;
	}

	while (height > 0)
	{
		height--;
		free(grid[height]);
	}

	free(grid);
}
