#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_binary- prints a uint in binary
 *
 * @n: the unsigned int
 *
 * Return: returns nothing to the main
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
