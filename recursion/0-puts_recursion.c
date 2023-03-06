/**
 * _puts_recursion- uses recursion to print a string
 * @s: the string we need to print
 *
 *
 * Return: returns nothing to the main
 */

#include "main.h"
#include <stdio.h>

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
