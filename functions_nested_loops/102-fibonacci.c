#include <stdio.h>


/**
 * main- prints the first 50 numbers of the Fibonacci sequence
 *
 * Return: returns 0 if everything went well
 */

int main(void)
{
	int i;
	long int nextNum, num1 = 0, num2 = 1;

	for (i = 1; i <= 51; i++)
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
		if (nextNum == 20365011074)
		{
			printf("%ld\n", nextNum);
			return (0);
		}
		printf("%ld, ", nextNum);
	}
	printf("\n");
	return (0);
}


