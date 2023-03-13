/**
 * str_concat- creates a string with the content of two other strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: returns the first address of the new string
 */

#include <stdlib.h>
#include "main.h"

char *str_concat(char *s1, char *s2)
{
	int i = 0, index, so1, so2;
	char *s;
	

	if(s1 == NULL)
		so1 = 0;
	else
	{
		while (s1[i] != '\0')
			i++;
		so1 = i;
	}
	i = 0;
	if(s2 == NULL)
		so2 = 0;
	else
	{
	while (s2[i] != '\0')
		i++;
	so2 = i;
	}
	s = malloc(sizeof(char) * (so1 + so2 + 1));
	if (s == NULL)
		return (NULL);


	for (i = 0 ; i < so1 ; i++)
	{
		s[i] = s1[i];
	}
	index = i;

	for (i = 0 ; i < so2 ; i++)
	{
		s[index + i] = s2[i];
	}
	s[index + i] = '\0';

	return (s);
}
