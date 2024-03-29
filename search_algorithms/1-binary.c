/**
 * binary_search- a function that uses binary search algorithm to find a number
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
	int i;
	int low = 0;
	int high = size - 1;

	while (low <= high)
	{
		int mid = (low + high) / 2;

		printf("Searching in array: ");
		for (i = low; i < high; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[high]);

		if (value == array[mid])
			return (mid);
		else if (value > array[mid])
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}

