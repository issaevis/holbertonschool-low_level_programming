/**
 * create_array- creates an array with malloc
 * @size: the size of the array
 * @c: the character to fill the array
 *
 *
 * Return: returns the first address of the array
 */

#include <stdlib.h>
#include "main.h"

char *create_array(unsigned int size, char c)
{
	int i, n;
	char *s;

	n = size;

	if (n <= 0)
		return (NULL);
	else
		s = malloc(sizeof(char) * n);

	for (i = 0 ; i < n ; i++)
	{
		s[i] = c;
	}
	s[i] = '\0';

	return (s);
}
