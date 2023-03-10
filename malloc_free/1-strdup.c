/**
 * _strdup- creates a copy of a string with malloc
 * @str: the string we need to copy
 *
 *
 * Return: returns the first address of the new string
 */

#include <stdlib.h>
#include "main.h"

char *_strdup(char *str)
{
	int i, size;
	char *s;

	if (str == NULL)
		return (NULL);

	i = 0;

	if (str[0] == '\0')
	{
		s = malloc(sizeof(char));
		s[0] = '\0';
	}

	while (str[i] != '\0')
		i++;
	size = i;

	if (size > 0)
	{
		s = malloc(sizeof(char) * size + 1);
		if (s == NULL)
			return (NULL);

		for (i = 0; i < size; i++)
		{
			s[i] = str[i];
		}
		s[i] = '\0';
	}

	return (s);
}
