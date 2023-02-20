/*
 *This program prints 0123456789
 *Author:issaevis
 */
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Prints a chars and a new line
 * Return: Will return 0 if everything went well
 */

int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
		putchar(i);
	putchar('\n');
return (0);
}
