/**
 * _sqrt_recursion- uses recursion to return the square root of a number
 * @n: the number we are using
 *
 * Return: returns an int to the main
 */

#include "main.h"

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (find_sqrt(n, 2));
}

/**
 * find_sqrt- facilitates the use of the previous function
 * @n: the number we get from the previous function
 * @i: the number we are returning to _sqrt_recursion
 *
 * Return: returns an int to _sqrt_recursion
 */


int find_sqrt(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i <= n)
		return (find_sqrt(n, i + 1));
	else
		return (-1);

}
