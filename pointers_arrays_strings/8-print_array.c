/**
 * puts_half- prints every 2 characters
 * @str: the address of a string
 *
 * Return: returns nothing to the main
 */

#include "main.h"
#include <stdio.h>

void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)		
	{
		if (i == n - 1)
		{
			printf("%d\n", a[i]);
			return;
		}
		printf("%d, ", a[i]);
	}
	return;
}
