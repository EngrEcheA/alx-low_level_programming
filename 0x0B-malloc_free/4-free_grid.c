#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees two dimensional aaray
 * @grid: two dimensional grid
 * @height: dimension of grid height
 * Description: frees memory of grid
 * Return: 0
 *
 */

void free_grid(int **grid, int height)
{
	int y;

	for (y = 0; y < height; y++)
	{
		free(grid[y]);
	}

	free(grid);
}
