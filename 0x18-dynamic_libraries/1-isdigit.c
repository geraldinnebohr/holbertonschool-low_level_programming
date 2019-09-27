#include "holberton.h"
/**
 * _isdigit - checks for a digit
 * @c: is an integer
 * Return: 1 success
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
