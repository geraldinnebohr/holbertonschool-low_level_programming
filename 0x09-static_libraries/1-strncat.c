#include "holberton.h"
/**
 *_strncat - concatenate 2 strings with an int
 *@dest: is a character
 *@src: is a character
 *@n: is an integer
 *Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{ }

	for (j = 0; j < n && src[j] != '\0'; j++, i++)
		dest[i] = src[j];

	dest[i] = '\0';
	return (dest);
}
