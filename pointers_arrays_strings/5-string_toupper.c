/**
 * string_toupper- turns all lowercase to uppercase
 * @s: the address of the string
 *
 *
 * Return: returns a string
 */

#include <stdlib.h>

char *string_toupper(char *s)
{
	int i = 0;
	char *upper = malloc(sizeof(char) * 100);

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			upper[i] = s[i] = s[i] - 32;
		else
			upper[i] = s[i];
		i++;
	}
	upper[i] = '\0';

	return (upper);
}
