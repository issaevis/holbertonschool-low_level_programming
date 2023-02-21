/*
 *This program prints all triple digit numbers
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
	int i, j, k;

	for (i = '0' ; i <= '7' ; i++)
	{
		for (j = i + 1  ; j <= '8' ; j++)
		{
			for (k = i + 2  ; k <= '9' ; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);

				if (i == '7' && k == '9')
					putchar('\n');
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	return (0);

}
