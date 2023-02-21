/**
 *This program prints _putchar
 *Author:issaevis
 */
#include "main.h"
/**
 * main - Prints a string and a new line after
 * Return: Will return 0 if everything went well
 */

int main(void)
{
	char str[8] = "_putchar";
	int i = 0;

	while (i < 9)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}

