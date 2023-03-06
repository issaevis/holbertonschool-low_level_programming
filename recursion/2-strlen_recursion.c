/**
 * _strlen_recursion- uses recursion to find the length of a string
 * @s: the string we need to find the length of
 *
 *
 * Return: returns an int to the main
 */

#include "main.h"

int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
