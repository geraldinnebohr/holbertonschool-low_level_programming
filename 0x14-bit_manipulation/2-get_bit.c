#include "holberton.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: is an integer
 * @index: is an integer
 * Return: value of the bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 64)
		return (-1);

return ((n >> index) & 1);

}
