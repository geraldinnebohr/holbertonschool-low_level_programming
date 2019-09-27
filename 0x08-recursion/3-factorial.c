#include "holberton.h"
/**
 *factorial - prints the factorial of a given number
 *@n: is an int
 *Return: -1.
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
