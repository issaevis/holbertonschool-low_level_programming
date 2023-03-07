/**
 * _memset- fills the first n bytes of @s with @b
 * @b: the constant byte
 * @s: the address of the string
 * @n: number of bytes that need to be filled
 *
 *
 * Return: returns a string to the main
 */

#include "main.h"

char *_memset(char *s, char b, unsigned int n)
{
	int i, size;

	size = n;

	for (i = 0 ; i < size ; i++)
	{
		s[i] = b;
	}

	return (s);
}
