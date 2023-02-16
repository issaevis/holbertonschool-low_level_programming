/*
 *This program outputs a predetermined string using the puts function.
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
	char str[] = "\"Programming is like building a multilingual puzzle\0";

	puts(str);
	return (0);
}
