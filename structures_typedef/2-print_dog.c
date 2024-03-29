/**
 * print_dog- print a struct of type dog
 *
 * @d: contains the address of the struct we declate in the main
 *
 * Return: returns nothing to the main
 */

#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

void print_dog(struct dog *d)
{
	if (d == NULL)
		exit(-1);

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
