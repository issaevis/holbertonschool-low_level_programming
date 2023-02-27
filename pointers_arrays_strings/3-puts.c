/**
 * _puts- prints a string
 * @s: the address of a string
 *
 * Return: returns nothing to the main
 */

#include "main.h"

void _puts(char *str)
{
	int i = 0, j; 

	while (str[i] != '\0')
	{
		i++;
	}

	j = i;

	for (i = 0 ; i <= j ; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
