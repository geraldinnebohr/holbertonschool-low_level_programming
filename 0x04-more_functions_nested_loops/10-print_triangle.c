#include "holberton.h"
/**
 * print_triangle - prints a triangle
 * @size: is an integer
 *
 */

void print_triangle(int size)

{
	int i, j;

	if (size <= 0)
	{
		_putchar ('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			if (j < size - (i + 1))
				_putchar(' ');
			else
				_putchar('#');
			_putchar('\n');
		}
	}
}
