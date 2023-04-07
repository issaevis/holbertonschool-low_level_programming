#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * clear_bit - set the index bit to 0
 *
 * @n: the uint we need
 * @index: the index where to replace
 *
 * Return: bit value or -1 if it fails
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
	{
		return (-1);
	}
	if (n != 0)
	{
		*n = *n & ~(1 << index);
		return (1);
	}
	return (-1);
}
