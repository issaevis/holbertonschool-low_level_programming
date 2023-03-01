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

char *_strncat(char *dest, char *src, int n)
{
	int lengthsrc, lengthdest, i;

	i = 0;
	while (src[i] != '\0')
		i++;
	lengthsrc = i;

	i = 0;
	while (dest[i] != '\0')
		i++;
	lengthdest = i;

	if (lengthsrc < n)
		n = lengthsrc;

	for (i = 0 ; i < n ; i++)
	{
		dest[i + lengthdest] = src[i];
	}
	dest[n + lengthdest] = '\0';
	return (dest);
}


