/**
 * _calloc- allocates memory based on the two parameters
 * @nmemb: the number of elements
 * @size: the size in bytes
 *
 * Return: ??returns a void array to the main??
 */

#include <stdlib.h>
#include "main.h"

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		arr[i] = 0;

	return (arr);
}
