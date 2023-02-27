/**
 * _strcpy- copies a string into another string
 * @dest: the destination string
 * @src: the source string
 *
 * Return: returns nothing to the main
 */

#include "main.h"
#include <stdio.h>

char *_strcpy(char *dest, char *src)
{
	int i = 0, size;

	while (src[i] != '\0')
	{
		i++;
	}

	size = i;

	for (i = 0 ; i < size ; i++)
	{
		dest[i] = src[i];
	}

	dest[size] = '\0';
	return (src);
}
