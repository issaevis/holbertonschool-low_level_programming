/*
 *This program prints two double digit numbers
 *Author:issaevis
 */
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Prints numbers, separated by a space followed bya comma
 * Return: Will return 0 if everything went well
 */

int main(void)
{
	int n1, n2, n3, n4;

	for (n1 = 0 ; n1 <= 9 ; n1++)
	{
		for (n2 = 0 ; n2 <= 9 ; n2++)
		{
			for (n3 = n1 ; n3 <= 9 ; n3++)
			{
				for (n4 = n2 + 1; n4 <= 9 ; n4++)
				{
					if (n1 == 9 && n2 == 9 && n3 == 9 && n4 == 9)
						return (0);
					else
					{
						putchar('0' + n1);
						putchar('0' + n2);
						putchar(' ');
						putchar('0' + n3);
						putchar('0' + n4);
					}
					if (n1 == 9 && n2 == 8 && n3 == 9 && n4 == 9)
						putchar('\n');
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
}
