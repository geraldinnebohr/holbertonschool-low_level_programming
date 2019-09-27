#include "holberton.h"

/**
 * _strspn - calculates the length in bytes of the initial segment
 * @s: input string
 * @accept: input character to locates in string
 *
 * Return: matrix filled.
 */

unsigned int _strspn(char *s, char *accept)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	while (s[a] != '\0')
	{
		while (accept[b] != '\0' && d == 0)
		{
			if (s[a] == accept[b])
			{
				c = c + 1;
				d = 1;
			}
			b = b + 1;
		}
		b = 0;
		d = 0;
		if (a > c)
		{
			break;
		}
		a = a + 1;
	}
	return (c);
}
