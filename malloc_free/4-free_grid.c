/**
 * alloc_grid- returns a pointer to a 2d array of ints
 * @width: parameter one
 * @height: parameter two
 *
 * Return: returns an int pointer
 */

#include <stdlib.h>
#include "main.h"

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
