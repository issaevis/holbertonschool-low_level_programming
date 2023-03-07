/**
 * _strcat- adds two strings together
 * @dest: the address of the string we will add to
 * @src: the address of the string we will add to dest
 *
 * Return: returns the full string
 */

#include "main.h"
#include <stdio.h>

char *_strcat(char *dest, char *src)
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

	for (i = 0 ; i <= lengthsrc ; i++)
	{
		dest[i + lengthdest] = src[i];
	}
	return (dest);
}
