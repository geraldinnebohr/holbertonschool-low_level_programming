#include "holberton.h"

/**
 *_strlen - function that returns the length of a string
 *Return: Always i
 *@s: is a character
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
		return (i);
}

/**
 *puts_half - prints half of a string
 *@str: is a character
 *
 */

void puts_half(char *str)
{
	int len, i, m, n;

	(void)n;
	len = _strlen(str);
	m = len / 2;

	if (len % 2 == 0)
		n = m;
	else
		n = m + 1;

	for (i = n; i <= len - 1; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
