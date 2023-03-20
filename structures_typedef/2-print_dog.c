/**
 * init_dog- initializes a struct of type dog
 *
 * @name: a string that contains the name
 * @age: a float that contains the age
 * @owner: a string that contains the name of the owner
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
		printf("Name: (nill)\n");
	else
		printf("Name: %s\n", d->name);

	if (d->age == 0)
		printf("Age: (nill)\n");
	else
		printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nill)\n");
	else
		printf("Owner: %s\n", d->owner);
}
