#include "holberton.h"
#include <stdio.h>

/**
 *print_chessboard - it prints chessboard
 *@a: is a pointer
 *Return: Always 0
 */

void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			putchar(a[i][j]);
		putchar('\n');
	}
}
