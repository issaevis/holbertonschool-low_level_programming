/**
 * print_rev- prints a string in reverse order
 * @s: the address of a string
 *
 * Return: returns nothing to the main
 */

#include "main.h"

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i = i-1;

	for (; i >= 0 ; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
