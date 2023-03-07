#include "main.h"


/**
 * _isalpha- checks for lowercase characters
 * @c: A char/int to check if it is lowercase
 *
 * Return: 1 if c is a letter, 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
