#include "holberton.h"
/**
 *_strspn - gets the length of a prefix substring
 *@s: string
 *@accept: string
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, c;

	c = 0;

	for (i = 0; s[i]; i++)

		for (j = 0; accept[j]; j++)
		{
			if (s[c] == accept[j])
				c++;
		}
	return (c);
}
