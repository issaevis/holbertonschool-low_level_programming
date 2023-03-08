/*
 *This program adds multiple numbers
 *Author:issaevis
 */
#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
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
			if (is_num(argv[i]) == 1)
				sum = sum + atoi(argv[i]);
			else
			{
				printf("Error\n");
				exit(-1);
			}
		}
		else
		{
			printf("Error\n");
			exit(-1);
		}
	}
	printf("%d\n", sum);
	return (0);
}

/**
 * is_num - Prints the sum of two or more numbers
 * @s: The string we get from main
 *
 * Return: Will return 1 if its a number and -1 if its not
 */


int is_num(char *s)
{
	int i;

	for (i = 0; i < strlen(s); i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
			continue;
		else
			return (-1);
	}
	return (1);
}
