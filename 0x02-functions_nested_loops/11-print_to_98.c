#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - to print natural numbers from n to 98
 * @n: is an integer
 * Return: 0
 */

void print_to_98(int n)
{

	if (n < 98)
	{
		for (; n < 98; n++)
			printf("%d, ", n);
	}
	else if (n > 98)
	{
		for (; n > 98; n--)
			printf("%d, ", n);
	}
	if (n == 98)
		printf("%d\n", n);
}
