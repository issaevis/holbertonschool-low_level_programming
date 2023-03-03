/**
 * _strspn- function that gets the length of prefix substring
 * @s: the string we are using
 * @accept: the string we  are using to prefix
 *
 *
 * Return: returns an unsigned int to the main
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
