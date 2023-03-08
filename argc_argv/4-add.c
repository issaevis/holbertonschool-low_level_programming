/*
 *This program adds multiple numbers
 *Author:issaevis
 */
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints the sum of two or more numbers
 * @argc: The count of the arguments
 * @argv: An array with the arguments
 *
 * Return: Will return 0 if everything went well
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (*argv[i] >= '0' && *argv[i] <= '9')
		{
			sum = sum + atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			exit(-1);
		}
	}
	printf("%d\n", sum);
}
