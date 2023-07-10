#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - Allocates memory for a 2-dimensional array of integers
 * @width: The width of the grid
 * @height: The height of the grid
 * Return: Pointer to the allocated grid, or NULL on failure
*/
int **alloc_grid(int width, int height)
{
	int **grid;
	int i;
	int j;

	if (width <= 0)
	{
		return (0);
	}
	if (height <= 0)
	{
		return (0);
	}

	grid = (int **) malloc(height * sizeof(int *));

	if (grid == 0)
	{
		return (0);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *) malloc(width * sizeof(int));
		if (grid[i] == 0)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (0);
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
