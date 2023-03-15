/**
 * array_range- creates an array and puts the numbers in order
 * @min: the min number
 * @max: the max number
 *
 * Return: returns the array
 */

#include <stdlib.h>
#include "main.h"

int *array_range(int min, int max)
{
	int *arr, i;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min) + 1);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < (max - min); i++)
	{
		arr[i] = min + i;

	}
	return (arr);
}
