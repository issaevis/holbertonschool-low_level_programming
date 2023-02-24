#include "main.h"


/**
 * print_to_98- prints numbers to 98
 *
 * @n: the parameter we get from main
 *
 * Return: returns nothing to the main
 */

void print_to_98(int n)
{
	int i, firstn, secondn, thirdn;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			thirdn = i % 10;

			secondn = i / 10;
			secondn = secondn % 10;

			firstn = i / 100;
			firstn = firstn % 10;

			if (i >= 100)
			{
			_putchar('0' + firstn);
			}

			_putchar('0' + secondn);
			_putchar('0' + thirdn);

			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}

		_putchar('\n');
	}
	else if (n == 98)
	{
		_putchar('9');
		_putchar('8');
		_putchar('\n');
	}
	else
	{
		for (i = n; i <= 98; i++)
		{
			thirdn = i % 10;
			secondn = i / 10;
			secondn = secondn % 10;
			firstn = i / 100;
			firstn = firstn % 10;
			if (i < 0)
			{
				_putchar('-');
				firstn = firstn * -1;
				secondn = secondn * -1;
				thirdn = thirdn * -1;
			}
			if (i <= -100)
			{
				_putchar('0' + firstn);
			}
			if (secondn != 0)
				_putchar('0' + secondn);

			_putchar('0' + thirdn);

			if (i != 98)
			{
			_putchar(',');
			_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
