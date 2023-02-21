#include "main.h"


/**
 * print_sign- checks for the sign of a number
 * @n: An int to check if it is positive/negative/0
 *
 * Return: 1 if c is greater than 0
 * 0 if it is 0
 * -1 if it is smaller than 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
