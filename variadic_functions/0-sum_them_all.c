/**
 * sum_them_all- Sums all the ints given to it
 *
 * @n: The first element
 *
 * Return: returns the sum as an int to the main
 */

#include <stdio.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int i, sum = 0, count;

	count = n;

	va_start(ap, n);

	for (i = 0; i < count; ++i)
	{
		sum = sum + va_arg(ap, int);
	}
	va_end(ap);

	return (sum);
}
