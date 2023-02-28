/**
 * rev_string- prints a string in reverse order
 * @s: the address of a string
 *
 * Return: returns nothing to the main
 */

#include "main.h"
#include <stdio.h>

void rev_string(char *s)
{
	int i = 0, j, len;
	char tmp;

	while (s[i] != '\0')
	{
		i++;
		len = i;
	}
	
	if (len == ' ')
	{
		_putchar('\n');
		return;
	}
	j = len - 1;
	i = 0;

	while (j >= i)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;

		i++;
		j--;
	}
}
