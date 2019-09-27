#include "holberton.h"
/**
 *calc - returns the natural square root of a number
 *@x: is an integer
 *@y: is an integer
 *Return: -1.
 */

int calc(int x, int y)
{
	if (x == y * y)
		return (y);
	else if (x < 0)
		return (-1);
	else if (x < y * y)
		return (-1);
	else
		return (calc(x, (y + 1)));
}

/**
 *_sqrt_recursion - calls another variable
 *@n: is an integer
 *Return: calc
 */
int _sqrt_recursion(int n)
{
	int y;

	y = 1;

	return (calc(n, y));
}
