/*
 *This program prints the size of various types
 *Author:issaevis
 */
#include <stdlib.h>
#include <stdio.h>
/**
 * main - Prints multiple strings and the size of various datatypes
 * Return: Will return 0 if everything went well
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %zu byte(s)\n", sizeof(a));
	printf("Size of an int: %zu byte(s)\n", sizeof(b));
	printf("Size of a long int: %zu byte(s)\n", sizeof(c));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(d));
	printf("Size of a float: %zu byte(s)\n", sizeof(e));

	return (0);
}

