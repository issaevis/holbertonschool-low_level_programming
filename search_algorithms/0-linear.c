/**
 *linear_search- A function that uses linear search to find the index of a nr
 *
 *@array: The array we search in
 *@size: The size of the array
 *@value: The value we need to seach
 *
 *Return: Returns an int to the main, -1 if value is not present/ array is null
 */

#include "search_algos.h"

int linear_search(int *array, size_t size, int value)
{
	int i = 0;

	if (array == NULL)
		return (-1);

	while (i < (int)size)
	{
		if (array[i] == value)
		{
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
			return (i);
		}
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		i++;
	}
	return (-1);
}
