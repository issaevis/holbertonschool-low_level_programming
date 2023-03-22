/**
 * print_name- prints a name
 *
 * @name: the name that we need to print
 * @f: the function we point to
 *
 * Return: returns nothing
 */

#include <stdlib.h>
#include "function_pointers.h"

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		exit(-1);
	f(name);
}
