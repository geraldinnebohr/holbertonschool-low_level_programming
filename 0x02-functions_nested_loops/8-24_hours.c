#include "holberton.h"

/**
 * jack_bauer - print every minute of the day
 *
 * Return: 0
 */

void jack_bauer(void)
{
	int x, y, z, w;
	int a = '9';

	for (x = '0'; x <= '2'; x++)
	{
		if (x == '2')
		{
			a = '3';
		}
		for (y = '0'; y <= a; y++)
		{
			for (z = '0'; z <= '5'; z++)
			{
				for (w = '0'; w <= '9'; w++)
				{
					_putchar (x);
					_putchar (y);
					_putchar (':');
					_putchar (z);
					_putchar (w);
					_putchar ('\n');
				}
			}
		}
	}
}
