/*
 *This program prints all double digit numbers
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
	int i, j;

	for (i = '0' ; i <= '8' ; i++)
	{
		for (j = i + 1  ; j <= '9' ; j++)
		{
			putchar(i);
			putchar(j);

			if (i != '8' && j != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
