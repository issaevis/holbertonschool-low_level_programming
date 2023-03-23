/**
 * print_strings- Prints all strings given to it with the separators
 *
 * @separator: The separators between the strings
 * @n: the count of strings
 *
 * Return: returns nothing to the main
 */

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = n; i > 0; --i)
	{
		printf("%s", va_arg(ap, char*));
		if (i != 1)
			printf("%s", separator);
	}
	va_end(ap);

	printf("\n");
}
