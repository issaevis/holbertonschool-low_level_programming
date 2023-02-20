/*
 *This program prints all possible HEX numbers
 *Author:issaevis
 */
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Prints chars and a new line after
 * Return: Will return 0 if everything went well
 */

int main(void)
{
	int i;

	for (i = 48 ; i < 58 ; i++)
		putchar(i);
	for (i = 97 ; i < 103 ; i++)
		putchar(i);
	putchar('\n');

	return (0);
}
