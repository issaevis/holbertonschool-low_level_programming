/**
 * _pow_recursion- uses recursion to add a number to the power of y
 * @x: the number we are using
 * @y: the power of the number
 *
 * Return: returns an int to the main
 */

#include "main.h"

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y > 0)
		return (x * _pow_recursion(x, y - 1));

	return (-1);
}
