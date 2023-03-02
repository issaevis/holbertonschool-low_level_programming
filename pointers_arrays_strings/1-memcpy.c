/**
 * _memcpy- function that copies memory area
 * @dest: the destination string
 * @src: the source string
 * @n: number of bytes that need to be copied
 *
 *
 * Return: returns a string to the main
 */

#include "main.h"

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i, size;

	size = n;
	for (i = 0 ; i < size ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
