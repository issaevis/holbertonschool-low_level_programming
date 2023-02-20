/*
 *This program prints a number
 *Author:issaevis
 */
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Prints number, tells if its positive or negative
 * Return: Will return 0 if everything went well
 */


int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("The number is 0\n");
	else
		printf("%d is negative\n", n);

	return (0);
}
