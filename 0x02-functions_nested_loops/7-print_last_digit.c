#include "holberton.h"
/**
 * print_last_digit - returns the last digit of a number
 * @n: is an integer
 *
 * Return: Always 0.
 */
int print_last_digit(int n)

{

	n = (n % 10);
	if (n < 0)
		n = n * (-1);
		_putchar ('0' + n);
	return (n);
}
