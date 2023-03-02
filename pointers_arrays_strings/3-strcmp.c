/**
 * _strcmp- compares two strings
 * @s1: the address of the first string
 * @s2: the address of the second string
 *
 *
 * Return: returns an int to the main
 */

#include "main.h"

int _strcmp(char *s1, char *s2)
{
	int i, res, j = 0;

	for (i = 0 ; s1[i] != '\0' ; i++)
	{

			if (s1[i] != s2[j])
			{
				res = s1[i] - s2[i];
				return (res);
			}
			j++;
	}
	return (0);
}

