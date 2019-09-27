#include "holberton.h"

/**
 * times_table - print the 9 times table
 *
 * Return: 0
 */

void times_table(void)
{
	int x, y, w, u;
	int b;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			w = x * y;
			if (w > 9)
			{
				u = w;
				while (u >= 10)
				u = u / 10;
				b = w % 10;
				_putchar(',');
				_putchar(' ');
				_putchar (u + '0');
				_putchar (b + '0');
			}
			else
			{
				if (y != 0)
				{
					_putchar (',');
					_putchar (' ');
					_putchar (' ');
				}
				_putchar (w + '0');
			}
		}
		_putchar('\n');
	}
}
