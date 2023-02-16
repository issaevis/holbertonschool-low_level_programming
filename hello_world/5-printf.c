/*
 *This program outputs a predetermined string using the printf function.
 *Author:issaevis
 */
#include <stdlib.h>
#include <stdio.h>
/**
 * main - Prints a string
 * Return: Will return 0 if everything went well
 */
int main(void)
{
	char str[] = "with proper grammar, but the outcome is a piece of art,\0";

	printf("%s\n", str);
	return (0);
}
