/**
 * _print_rev_recursion- uses recursion to print a string in reverse
 * @s: the string we need to print
 *
 *
 * Return: returns nothing to the main
 */

#include "main.h"

int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
