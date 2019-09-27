#include "holberton.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: is a pointer to int
 * @index: is an integer
 * Return: value of the bit at index
 */



int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	mask = 1;

	if (index >= 64)
		return (-1);

	else
	{
		mask = 1 << index;
		*n = *n & ~mask;
	}
	return (1);
}
