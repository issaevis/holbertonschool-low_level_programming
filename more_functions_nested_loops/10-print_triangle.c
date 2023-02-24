/**
 * print_triangle- prints a square
 * @size: how big the triangle is
 *
 *
 * Return: returns nothing to the main
 */

#include "main.h"

void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 1 ; i <= size ; i++)
	{
		for (j = size - i ; j > 0 ; j--)
		{
		_putchar(' ');
		}
		for (k = 0 ; k < i ; k++)
			_putchar('#');
	_putchar('\n');
	}

}

