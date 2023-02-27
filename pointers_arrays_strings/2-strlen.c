/**
 * _strlen- returns the length of a string
 * @s: the address of a string
 *
 * Return: returns nothing to the main
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}
