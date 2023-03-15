/**
 * free_grid- frees a 2d array's dynamic memory
 * @height: parameter one
 * @grid: the 2d array
 *
 * Return: returns nothing to the main
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
