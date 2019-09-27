#include "holberton.h"
/**
 * print_line - draws a stright line
 * @n: is an integer
 *
 */

void print_line(int n)

{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}

	if (n <= 0)
		_putchar('\n');

}
