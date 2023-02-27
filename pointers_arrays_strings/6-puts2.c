/**
 * puts2- prints every 2 characters
 * @str: the address of a string
 *
 * Return: returns nothing to the main
 */

#include "main.h"
#include <stdio.h>

void puts2(char *str)
{
	int i = 0, j, size;

	while (str[i] != '\0')
		i++;
	size = i;

	for (j = 0; j < size ; j = j + 2)
	{
		if (j >= size)
		{
			_putchar('\0');
			_putchar('\n');
			return;
		}
		_putchar(str[j]);
	}
	_putchar('\n');
}
