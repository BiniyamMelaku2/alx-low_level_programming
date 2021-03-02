#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees reserved 2d memory
 * @height: height of the grid
 * @grid: pointer to allocated 2d memory
 */

void free_grid(int **grid, int height)
{
if (grid != NULL && height != 0)
while (height >= 0)
{
free(grid[height]);
height--;
}
free(grid);
}
