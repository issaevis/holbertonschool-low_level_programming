/**
 * free_dog- frees the space allocated for the struct
 *
 * @d: the struct we need to free
 *
 * Return: returns nothing to the main
 */

#include "dog.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
