/**
 * more_numbers- prints numbers from 0-14
 *
 * Return: returns nothing
 */

#include "main.h"

void more_numbers(void)
{
	int i, fn, sn;

	for (i = 0 ; i > 15 ; i++)
	{
		fn = i / 10;
		sn = i % 10;

		if (i >= 10)
			_putchar('0' + fn);

		_putchar('0' + sn);
	}

	_putchar('\n');
}
