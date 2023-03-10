/*
 *This program prints a number and checks the conditions
 *Author:issaevis
 */
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Prints a random number and checks the conditions
 * Return: Will return 0 if everything went well
 */

int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;
	if (lastDigit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
	else if (lastDigit == 0)
		printf("Last digit of %d is %d and is 0\n", n, lastDigit);
	else if (lastDigit < 6 && lastDigit != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
	return (0);
}
