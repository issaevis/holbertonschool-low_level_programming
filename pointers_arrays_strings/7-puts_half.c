/**
 * puts_half- prints every 2 characters
 * @str: the address of a string
 *
 * Return: returns nothing to the main
 */

#include "main.h"
#include <stdio.h>

void puts_half(char *str)
{
	int i = 0, size;

	while (str[i] != '\0')
		i++;

	size = i;

	if (size % 2 == 1)
	{
		size = (size - 1) / 2;
		size += 1;
	}
	else
	{
		size = size / 2;
	}

	for (; size < i ; size++)
	{
		_putchar(str[size]);
	}
	_putchar('\n');
}
