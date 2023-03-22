/**
 * array_iterator- prints the contents of an array
 *
 * @array: the array in question
 * @size: the size as a unsigned long int
 * @action: the function we point to
 *
 * Return: returns nothing
 */

#include <stdlib.h>
#include "function_pointers.h"

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (action == NULL)
		exit(-1);

	unsigned long int i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
