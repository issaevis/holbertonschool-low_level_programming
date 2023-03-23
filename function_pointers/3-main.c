/*
 *Calculator with these functions (+,-,*,/,%)
 *Author:issaevis
 */
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
#include <string.h>

/**
 * main - Prints the calculations needed
 * @argc: The count of the arguments
 * @argv: An array with the arguments
 *
 * Return: Will return 0 if it went well and NULL if something went bad
 */

int main(int argc, char *argv[])
{
	int n1, n2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (strlen(argv[2]) > 1)
	{
		printf("Error\n");
		exit(99);
	}


	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);

	printf("%d\n", get_op_func(argv[2])(n1, n2));

	return (0);
}
