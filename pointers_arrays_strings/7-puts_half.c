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

	for (i = size / 2 ; i <= size ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
