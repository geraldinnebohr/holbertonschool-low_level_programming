#include "holberton.h"

/**
 * mask_recursion - function to move through the number
 * @m: is an integer
 */

void mask_recursion(unsigned long int m)
{
	if (m == 0)
		return;

	mask_recursion(m >> 1);
	_putchar((m & 1) + '0');

}

/**
 * print_binary - function that prints the binary of a number
 * @n: is an integer
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
		mask_recursion(n);
}
