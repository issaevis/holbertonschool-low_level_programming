/**
 * factorial- uses recursion to find the factorial of a number
 * @n: the number we are using
 *
 *
 * Return: returns an int to the main
 */

#include "main.h"

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}

}
