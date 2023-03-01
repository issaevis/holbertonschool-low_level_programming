/**
 * _atoi- converts a string to an integer
 * @s: the address of the string 
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


