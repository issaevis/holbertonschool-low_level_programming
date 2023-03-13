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

	while (str[i] != '\0')
		i++;
	size = i;

	if (size > 0)
	{
		s = malloc(sizeof(char) * size);
		if (s == NULL)
			return (NULL);

		for (i = 0; i < size; i++)
		{
			s[i] = str[i];
		}
		s[i] = '\0';
	}
	else
		return (NULL);

	return (s);
}
