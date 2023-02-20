/*
 *This program prints all single numbers
 *Author:issaevis
 */
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Prints numbers, separated by a comma followed by space
 * Return: Will return 0 if everything went well
 */

int main(void)
{
	int i;

	for (i = '0' ; i <= '9' ; i++)
	{
		putchar(i);
		if (i == '9')
		{

			putchar('\n');
		} else
		{
			putchar(',');
			putchar(' ');
		}
	}




	return (0);
}
