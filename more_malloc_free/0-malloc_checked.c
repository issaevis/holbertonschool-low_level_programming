/**
 * malloc_checked- creates a string with the content of two other strings
 * @b: the bytes we want to allocate
 *
 * Return: returns the first address of the newly allocated memory
 */

#include <stdlib.h>
#include "main.h"

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
