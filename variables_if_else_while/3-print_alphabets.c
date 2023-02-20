/*
 *This program prints the alphabet, lowercase and upercase
 *Author:issaevis
 */
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Prints a char and a new line
 * Return: Will return 0 if everything went well
 */

int main(void)
{
	int i, j;

	for (i = 97; i <= 122; i++)
		putchar(i);
	for (j = 65; j <= 90 ; j++)
		putchar(j);
	putchar('\n');
	return (0);
}

