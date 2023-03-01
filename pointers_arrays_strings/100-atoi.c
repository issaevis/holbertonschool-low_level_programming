/**
 * _atoi- converts a string to an integer
 * @s: the address of the string 
 *
 * Return: returns an int to the main
 */

#include "main.h"
#include <math.h>

int _atoi(char *s)
{
	int length, i, sign, flag, num, j;

	length = num = flag = j = 0;
	sign = 1;


	while (s[length] != '\0')
		length++;

	if (length == 0)
		return (0);

	for (i = 0; i < length ; i++)
	{
		if (s[i] == '-')
		{

			sign = sign * -1;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			while (s[i] >= '0' && s[i] <= '9')
			{
				num = num * 10 + (s[i] - '0');
				i++;	
			}
		return (sign * num);
		}
	}
	return (0);
}
