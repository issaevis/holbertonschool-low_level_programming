#include "main.h"


/**
 * _abs- checks for the absolute value of a number
 * @n: An int to find its absolute value
 *
 * Return: returns n to the main function
 */

int _abs(int n)
{
	if (n > 0)
		return (n);
	else if (n < 0)
	{
		n = n * -1;
		return (n);
	}
	else
	{
		n = 0;
		return (n);
	}
}


