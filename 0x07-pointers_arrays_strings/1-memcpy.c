#include "holberton.h"
/**
 *_memcpy - copies memory area
 *@dest: is a pointer
 *@src: is a pointer
 *@n: is an integer
 *Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
