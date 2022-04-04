#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *function frees 2 dimensional grid previously created by alloc_grid function.
  * free_grid - fills memory with a constant byte
  * @grid: nixon
  * @height: size of the rows
  * Return: nothing
  */

void free_grid(int **grid, int height)
{
	int i;

	free(grid);
	for (i = 0; i < height; i++)
		free(grid[i]);
}
