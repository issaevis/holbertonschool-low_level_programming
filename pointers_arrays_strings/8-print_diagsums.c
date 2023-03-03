/**
 * print_diagsums- prints the sum of the diagonals in a 2d array
 * @a: the 2d array passed as a 1d array
 * @size: size of the array
 *
 * Return: returns nothing to the main
 */

#include "main.h"
#include <stdio.h>

void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + i * size + i);
		sum2 += *(a + i * size + (size - i - 1));
	}

	printf("%d, %d\n", sum1, sum2);
}
