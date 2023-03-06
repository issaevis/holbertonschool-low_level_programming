/**
 * is_prime_number- uses recursion to find if a number is prime or not
 * @n: the number we are using
 *
 * Return: returns an int to the main (1 if prime, 0 if not)
 */

#include "main.h"

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_check(n, 2));

}


/**
 * prime_check- uses recursion to find if a number is prime or not
 * @n: the number we are using
 * @i: int we use to make it easier on ourselves
 *
 * Return: returns an int to the main (1 if prime, 0 if not)
 */

int prime_check(int n, int i)
{


	if (i * i > n)
		return (1);
	else if (n % i == 0)
		return (0);
	else
		return (prime_check(n, i + 1));
}
