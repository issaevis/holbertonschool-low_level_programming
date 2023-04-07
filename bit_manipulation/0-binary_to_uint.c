#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint- converts a number from binary to uint
 *
 * @b: the binary number expressed in chars
 *
 * Return: returns the unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0, j = 0;
	unsigned int n = 1, m = 0;

	if (b == NULL)
		return (0);

	while (b[j] != '\0')
		j++;

	for (i = j - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			m = m + n;
		n = n * 2;
	}
	return (m);
}
