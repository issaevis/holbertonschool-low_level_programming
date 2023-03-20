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

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog doggy;

	doggy.name = name;
	doggy.age = age;
	doggy.owner = owner;

	d = doggy;
}
