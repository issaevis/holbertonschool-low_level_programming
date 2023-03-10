/**
 * _print_rev_recursion- uses recursion to print a string in reverse
 * @s: the string we need to print
 *
 *
 * Return: returns nothing to the main
 */

#include "main.h"
#include <stdio.h>

void _print_rev_recursion(char *s)
{
	if (s[0] != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(s[0]);
	}
}
