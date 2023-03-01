/**
 * _strncat- adds two strings for a set ammount of characters
 * @dest: the address of the dest string
 * @src:the address of the src string
 * @n: how much of the src string should be added
 *
 *
 * Return: returns an int to the main
 */

#include "main.h"

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return dest;
}
