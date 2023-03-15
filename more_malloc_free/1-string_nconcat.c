/**
 * string_nconcat- creates a string with the content of two other strings
 * @n: the number of bytes we want to add from s2
 * @s1: the first string
 * @s2: the second string
 *
 * Return: returns the first address of the new string
 */

#include <stdlib.h>
#include "main.h"

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, index, so1, so2, nn;
	char *s;

	i = 0;
	nn = n;

	while (s1[i] != '\0')
		i++;
	so1 = i;
	i = 0;

	while (s2[i] != '\0')
		i++;
	so2 = i;

	s = malloc(nn + sizeof(char) * so1 + 1);
	if (s == NULL)
		return (NULL);

	if (nn >= so2)
		nn = so2;

	for (i = 0; i < so1; i++)
	{
		s[i] = s1[i];
	}
	index = i;

	for (i = 0; i < nn; i++)
	{
		s[index + i] = s2[i];
	}
	s[index + i] = '\0';

	return (s);
}
