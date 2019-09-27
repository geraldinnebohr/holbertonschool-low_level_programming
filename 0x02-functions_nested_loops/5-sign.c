#include "holberton.h"

/**
 * print_sign - checks the sign of a number
 * @n: is a parameter
 * Return: 0
 */

int print_sign(int n)

{
	if (n == 0)
	{
		_putchar('0');
			return (0);
	}
	else
	{
		if (n > 0)
		{
			_putchar('+');
				return (1);
		}
		else
		{
			_putchar ('-');
				return (-1);
		}
	}
}
