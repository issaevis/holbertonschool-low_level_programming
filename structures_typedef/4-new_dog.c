/**
 * new_dog- creates a new struct of type dog
 *
 * @name: a string that contains the name
 * @age: a float that contains the age
 * @owner: a string that contains the name of the owner
 *
 * Return: returns a struct of the type dog to the main
 */

#include "dog.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog1 = malloc(sizeof(dog_t));

	if (dog1 == NULL)
		return (NULL);

	dog1->name = malloc(strlen(name) + 1);
	dog1->owner = malloc(strlen(owner) + 1);
	if (dog1->name == NULL || dog1->owner == NULL)
	{
		free(dog1->name);
		free(dog1->owner);
		free(dog1);
		return (NULL);
	}
	strcpy(dog1->name, name);
	dog1->age = age;
	strcpy(dog1->owner, owner);

	return (dog1);
}
