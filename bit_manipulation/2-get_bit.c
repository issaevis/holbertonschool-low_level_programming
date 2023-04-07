#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_bit- gets the value of a bit at the given index
 *
 * @n: the unsigned int
 * @index: the index we need
 *
 * Return: returns a 1 or 0
 */


int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 32)
	{
		return (-1);
	}
	if (n != 0)
	{
		n = (n >> index) & 1;
		return (n);
	}
	return (-1);
}
