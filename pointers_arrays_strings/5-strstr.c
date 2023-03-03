/**
 * _strstr- searches string for any of a set of bytes
 * @haystack: the string we are using
 * @needle: the string we are using to check
 *
 *
 * Return: returns an address to the main
 */

#include "main.h"

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	i = 0;

	if (needle[i] == '\0')
		return (haystack);

	for (i = 0 ; haystack[i] != '\0' ; i++)
	{
		for (j = 0 ; needle[j] != '\0' ; j++)
		{
			if (haystack[i] == needle[0] && haystack[i + 1] == needle[1])
			{
				return (&haystack[i]);
			}
		}
	}
	return (0);
}
