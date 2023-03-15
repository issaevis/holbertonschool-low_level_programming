/**
 * alloc_grid- returns a pointer to a 2d array of ints
 * @width: parameter one
 * @height: parameter two
 *
 * Return: returns an int pointer
 */

#include <stdlib.h>
#include "main.h"

int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = (int **) malloc(height * sizeof(int *));

	for (i = 0; i < height; i++)
		arr[i] = (int *) malloc(width * sizeof(int));

	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < height; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
