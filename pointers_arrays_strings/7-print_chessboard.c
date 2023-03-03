/**
 * print_chessboard- prints a chessboard
 * @a: the length of the first index of the 2D array
 *
 *
 * Return: returns nothing to the main
 */

#include "main.h"
#include <stdio.h>

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0 ; i < 8 ; i++)
	{
		for (j = 0 ; j < 8 ; j++)
		{
			printf("%c", a[i][j]);
		}
		printf("\n");
	}
}
