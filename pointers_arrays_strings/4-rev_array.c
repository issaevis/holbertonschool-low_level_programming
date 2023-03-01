/**
 * reverse_array- reverses the contents of an array
 * @n: the number of elements of the array
 * @a: start of the array
 *
 * Return: returns nothing to the main
 */

#include "main.h"

void reverse_array(int *a, int n)
{
	int i, arr[100], j = n - 1;

	for (i = 0 ; i < n ; i++)
	{
		arr[i] = a[j];
		j--;
	}

	for (i = 0 ; i < n ; i++)
	{
		a[i] = arr[i];
	}
}
