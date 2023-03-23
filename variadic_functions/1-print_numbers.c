/**
 * print_numbers- Prints all the ints given to it with the separators
 *
 * @separator: The separators between the numbers
 * @n: the count of numbers
 *
 * Return: returns nothing to the main
 */

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int i;

	va_start(ap, n);
	for (i = n; i > 0 ; --i)
	{
		printf("%d", va_arg(ap, int));
		if (i != 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
}
