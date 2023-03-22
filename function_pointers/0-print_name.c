/**
 * print_name- prints a name
 *
 * @name: the name that we need to print
 * @f: the function we point to
 *
 * Return: returns nothing
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
