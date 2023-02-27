/**
 * _strlen- returns the length of a string
 * @s: the address of a string
 *
 * Return: returns nothing to the main
 */

int _strlen(char *s)
{
	int i;

	for (i = 0 ; i < 10000 ; i++)
	{
		if (s[i] == '\0')
		{
			return (i);
		}
		i++;
	}
	return (i);
}
