#include "holberton.h"

/**
 *print_diagonal - Function that draws a diagonal line on ther terminal
 *@n: Integer to computer
 *
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar ('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar ('\\');
			_putchar ('\n');
		}
	}
}
