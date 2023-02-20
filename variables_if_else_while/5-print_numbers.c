/*
 *This program prints single digits from 0 to 9
 *Author:issaevis
 */
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Prints a ints and a new line
 * Return: Will return 0 if everything went well
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		printf("%d", i);
	printf("\n");
	return (0);
}

