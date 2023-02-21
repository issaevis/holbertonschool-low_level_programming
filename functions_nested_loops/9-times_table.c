#include "main.h"


/**
 * times_table- prints a multiplication table
 *
 * Return: Doesn't return a thing to the main function
 */

void times_table(void)
{
	int times, n, sum, first, second;

	for (times = 0 ; times < 10 ; times++)
	{
		for (n = 0 ; n < 10 ; n++)
		{
			sum = times * n;

			if (n != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (sum < 10)
					_putchar(' ');
			}


			if (sum >= 10)
			{
				first = sum / 10;
				second = sum % 10;
				_putchar('0' + first);
				_putchar('0' + second);
			}

			else
				_putchar('0' + sum);

		}

		_putchar('\n');
	}

}
