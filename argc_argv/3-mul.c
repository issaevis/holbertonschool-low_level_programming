/*
 *This program multiplies two numbers
 *Author:issaevis
 */
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints the sum of two numbers that are multiplied
 * @argc: The count of the arguments
 * @argv: An array with the arguments
 *
 * Return: Will return 0 if everything went well
 */

int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		exit(-1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
