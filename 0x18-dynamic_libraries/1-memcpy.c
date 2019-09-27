#include "holberton.h"

/**
 * _memcpy - copy memories area
 * @dest: matrix to received the data of src
 * @src: matrix to copy
 * @n: size of matrix to copy
 * Return: matrix filled.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int c = 0;

	while (c < n)
	{
		dest[c] = src[c];
		c = c + 1;
	}
	return (dest);
}
