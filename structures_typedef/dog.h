#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Defines a struct called dog
 * @name: A string as a name
 * @age: A double as age
 * @owner: A string as the owner
 *
 * Description: This struct defines a new datatype
 * with two strings and one double
 */

struct dog
{
	char *name;
	double age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
/*
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
*/

#endif
