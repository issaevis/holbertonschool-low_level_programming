/**
 * _strpbrk- searches string for any of a set of bytes
 * @s: the string we are using
 * @accept: the string we are using to check
 *
 *
 * Return: returns an address to the main
 */

#include "main.h"

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (j = 0 ; accept[j] != '\0' ; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
	}
	return (0);
}
