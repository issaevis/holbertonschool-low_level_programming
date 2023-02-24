/**
 * main- prints the numbers from 1 to 100, followed by a new line
 * multiples of three print Fizz and for the multiples of five print Buzz
 * numbers which are multiples of both three and five print FizzBuzz
 * Return: returns 0 if everything goes well
 */
#include <stdio.h>
int main(void)
{
	int i;

	for (i = 1 ; i <= 100 ; i++)
	{
		if (i == 100)
		{
			printf("Buzz\n");
			return (0);
		}
		if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("FizzBuzz ");
			continue;
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz ");
			continue;
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz ");
			continue;
		}
		else
			printf("%d", i);
	printf(" ");
	}
	printf("\n");
	return (0);
}
