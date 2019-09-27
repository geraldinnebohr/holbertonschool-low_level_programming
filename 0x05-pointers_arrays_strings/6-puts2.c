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
 *puts2 - prints every other character of a string
 *@str: is a character
 *
 */

void puts2(char *str)
{
	int i;
	int len;

	len = _strlen(str);
	len--;

	for (i = 0; i <= len; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
