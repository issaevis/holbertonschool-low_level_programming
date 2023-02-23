/**
 * print_diagonal- prints a diagonal line
 * @n: the length of the line
 *
 *
 * Return: returns nothing to the main
 */

#include "main.h"

void print_diagonal(int n)
{

	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0 ; i < n ; i++)
	{
		for (j = 0 ; j < i ; j++)
			_putchar(' ');

		_putchar('\\');
		_putchar('\n');
	}
}

