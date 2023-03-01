/**
 * reverse_array- reverses the contents of an array
 * @n: the number of elements of the array
 *
 *
 * Return: returns nothing to the main
 */

#include "main.h"

#define MAX_SIZE 100

void reverse_array(int *a, int n)
{
	int i, arr[MAX_SIZE], j = n - 1;

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
