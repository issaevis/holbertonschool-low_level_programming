/**
 * print_array- prints every 2 characters
 * @a: the address of an array
 * @n: the size of the array we want to print
 *
 * Return: returns nothing to the main
 */

#include "main.h"
#include <stdio.h>

void print_array(int *a, int n)
{
	int i;

	if (n == 0 || n < 0)
	{
		printf("\n");
	}
	else
	{
		for (i = 0 ; i < n ; i++)
		{
			if (i == n - 1)
			{
				printf("%d\n", a[i]);
			}
			else
				printf("%d, ", a[i]);
		}
	}
}
