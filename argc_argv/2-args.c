/*
 *This program prints all arguments
 *Author:issaevis
 */
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints all arguments followed by a newline
 * @argc: The count of the arguments
 * @argv: An array with the arguments
 *
 * Return: Will return 0 if everything went well
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
