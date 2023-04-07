#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * set_bit - set index bit of int as 1
 *
 * @n: the unsigned int
 * @index: the index where to replace
 *
 * Return: bit value or -1 if it fails
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
	{
		return (-1);
	}
	if (n != 0)
	{
		*n = *n | (1 << index);
		return (1);
	}
	return (-1);
}
