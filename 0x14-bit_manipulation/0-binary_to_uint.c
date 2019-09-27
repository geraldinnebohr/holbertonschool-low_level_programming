#include "holberton.h"

/**
 *_strlen - returns the length of a string
 *@s: is a character
 * Return: 0;
 */

int _strlen(const char *s)
{
	if (*s == '\0')
		return (0);
	return ((1) + _strlen(s + 1));
}

/**
 *_pow_recursion - returns the value of x raised to the power of y
 *@x: is an integer
 *@y: is an integer
 *Return: -1.
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else
		return (x * _pow_recursion(x, y - 1));
}

/**
 * binary_to_uint - function that converts a binary number to decimal
 * @b: binary string
 * Return: converted decimal number
 */

unsigned int binary_to_uint(const char *b)
{
	int i, power = 0;
	unsigned int mul = 0;

	if (b == NULL)
		return (0);

	for (i = _strlen(b) - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		mul += (b[i] - '0') * _pow_recursion(2, power);
		power++;
	}
	return (mul);
}
