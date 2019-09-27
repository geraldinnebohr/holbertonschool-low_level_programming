#include "holberton.h"

/**
 * flip_bits - function that returns the number of bits
 * @n: is an integer
 * @m: is an integer
 * Return: number of bits to flip
 */



unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i;
	unsigned long int mask;

	mask = n ^ m;

	i = 0;
	while (mask)
	{
		if ((mask & 1) == 1)
			i++;
		mask >>= 1;
	}
	return (i);
}
