/**
 * swap_int- swaps two numbers together
 * @a: the address of an int
 * @b: the address of an int
 *
 * Return: returns nothing to the main
 */

void swap_int(int *a, int *b)
{
	int ph;

	ph = *a;
	*a = *b;
	*b = ph;
}
