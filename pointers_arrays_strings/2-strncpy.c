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
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return dest;

}
