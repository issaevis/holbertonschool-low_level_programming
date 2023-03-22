/**
 * int_index- This function searches for an int
 *
 * @array: the array in question
 * @size: the size as a unsigned long int
 * @cmp: the function we point to
 *
 * Return: returns an int to the main
 */

#include <stdlib.h>
#include "function_pointers.h"

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
			return (i);
	}

	return (-1);
}
