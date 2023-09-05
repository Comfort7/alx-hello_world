#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Allocates a 2-dimensional grid of integers.
 * @width: The width (number of columns) of the grid.
 * @height: The height (number of rows) of the grid.
 *
 * Return: A pointer to the allocated grid, or NULL on failure.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int *data;
	int i;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = (int **)malloc(height * sizeof(int *));

	if (grid == NULL)
	{
		return (NULL);
	}

	data = (int *)malloc(width * height * sizeof(int));

	if (data == NULL)
	{
		free(grid);
		return (NULL);
	}

	i = 0;
	while (i < height)
	{
		grid[i] = data + i * width;
			i++;
	}

	return (grid);
}
