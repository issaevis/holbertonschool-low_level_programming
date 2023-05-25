/**
 * binary_search- a function that finds a value through binary search
 *
 * @array: The array the algorithm searches in
 * @size: The size of the array
 * @value: The value it is looking for
 *
 * Return: Returns the index of the found number
 *		 or -1 if it ends up not finding it
*/

#include "search_algos.h"

int binary_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = size - 1;

	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		int mid = (low + high) / 2;

		if (value == array[mid])
			return (mid);
		else if (value > array[mid])
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}
