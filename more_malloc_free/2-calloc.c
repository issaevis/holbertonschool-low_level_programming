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

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);

	return (arr);
}
