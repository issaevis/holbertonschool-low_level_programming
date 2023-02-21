#include "main.h"


/**
 * print_last_digit- prints the last digit of a number
 * @n: An int to print the last digit of
 *
 * Return: returns the last digit to the main
 */

int print_last_digit(int n)
{
	int lastDigit;

	lastDigit = n % 10;

	if (lastDigit < 0)
		lastDigit = lastDigit * -1;

	_putchar(lastDigit + '0');
	return (lastDigit);
}
