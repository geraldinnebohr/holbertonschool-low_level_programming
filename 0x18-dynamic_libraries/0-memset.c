#include "holberton.h"

/**
 * _memset - fills the frst n bytes of the memory with constant
 * @s: pointed to memory to fill
 * @b: constant for filling
 * @n: size of matrix
 * Return: matrix filled.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int c = 0;

	while (c < n)
	{
		s[c] = b;
		c = c + 1;
	}
	return (s);
}
