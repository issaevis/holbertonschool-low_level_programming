/**
 * _strchr- function that copies memory area
 * @s: the string we are using
 * @c: the character we need to find
 *
 *
 * Return: returns the address of the char
 */

#include "main.h"
#include <stddef.h>

char *_strchr(char *s, char c)
{
	int i, size;

	size = 0;
	while (s[size] != '\0')
	{
		size++;
	}
	if (s[size] == c)
		return (&s[size]);

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}

	return (NULL);
}
