/**
 * leet- turns code into leet
 * @s: the address of the string
 *
 *
 * Return: returns a string to the main
 */

#include <stdlib.h>

char *leet(char *s)
{
	int i = 0, j;
	char *lower = "aeotl";
	char *higher = "AEOTL";
	char *replace = "43071";

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (j = 0 ; j < 5 ; j++)
		{
			if (s[i] == higher[j] || s[i] == lower[j])
			{
				s[i] = replace[j];
			}
		}
	}
	return (s);
}
