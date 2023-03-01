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
	int i, s1len, s2len;

	i = 0;

	while (s1[i] != '0')
		i++;
	s1len = i;
	i = 0;

	while (s2[i] != '0')
		i++;
	s2len = i;

		if (s1len < s2len)
			return (15);
		else if (s2len < s1len)
			return (-15);
		else
			return (0);

}
