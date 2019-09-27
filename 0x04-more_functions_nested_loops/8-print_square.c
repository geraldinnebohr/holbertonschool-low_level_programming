#include "holberton.h"
/**
 *print_square - Function that prints a square
 * @size: variable
 *
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar ('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
				_putchar('#');
			_putchar ('\n');
		}
	}
}
