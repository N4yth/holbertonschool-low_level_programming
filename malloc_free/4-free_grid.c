#include "main.h"
#include <stdlib.h>
/**
 * free_grid - free a grid
 * @grid: the grid to free
 * @height: height of the grid
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	while (height--)
	{
		free(grid[height]);
	}
	free(grid);
}
