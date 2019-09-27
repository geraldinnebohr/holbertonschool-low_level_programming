#include "holberton.h"
#include <stdio.h>
/**
 * _strpbrk - search a string for any of a set of bytes
 * @s: input string
 * @accept: input character to locates in string
 *
 * Return: matrix filled.
 */

char *_strpbrk(char *s, char *accept)
{
	int a = 0;
	int b = 0;
	int c = 0;

	while (s[a] != '\0' && c == 0)
	{
		while (accept[b] != '\0')
		{
			if (s[a] == accept[b])
			{
				c = 1;
				return (s = s + a);
			}
			b = b + 1;
		}
		b = 0;
		a = a + 1;
	}
		return (NULL);
}
