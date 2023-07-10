#include <stdlib.h>
#include "main.h"
/**
 * free_grid - Frees the memory allocated for a 2-dimensional grid
 * @grid: Pointer to the grid to be freed
 * @height: The height of the grid
 * Return: None
*/
void free_grid(int **grid, int height)
{
	int i;

	if (grid == 0)
	{
		return (0);
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
