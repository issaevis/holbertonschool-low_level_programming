#include <stdio.h>

/**
 * print_to_98- prints numbers to 98
 *
 * @n: the parameter we get from main
 *
 * Return: returns nothing to the main
 */

void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n ; i >= 98 ; i--)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
		printf("\n");	
	}
	else if (n == 98)
		printf("98\n");
		
	else
	{
		for (i = n ; i <= 98 ; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
		printf("\n");	
	}
}
