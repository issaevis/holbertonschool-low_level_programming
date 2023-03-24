#define MAX 100

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
#include <string.h>

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	char placeholder[MAX];

	va_start(ap, n);

	for (i = n; i > 0; --i)
	{
		char *str = va_arg(ap, char *);

		if (str == NULL)
			printf("(nil)");
		else
		{
			strcpy(placeholder, str);
			printf("%s", placeholder);
		}

		if (i != 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(ap);

	printf("\n");
}
