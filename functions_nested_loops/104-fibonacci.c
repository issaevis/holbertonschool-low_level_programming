#include <stdio.h>


/**
 * main- prints the first 100 numbers of the Fibonacci sequence
 *
 * Return: returns 0 if everything went well
 */

int main(void)
{
	int i;
	long long int nextNum ,num1 = 0, num2 = 1;

	for (i = 1; i < 100; i++)
	{
		if (i <= 1)
		{
			nextNum = i;
		}
		else
		{
			nextNum = num1 + num2;
			num1 = num2;
			num2 = nextNum;
		}
		printf("%lld ", nextNum);
	}
	printf("\n");
	return (0);
}


