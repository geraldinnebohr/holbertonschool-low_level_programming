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
 *rev_string - reverses a string
 *@s: is a character
 *
 */

void rev_string(char *s)
{
	int len, i, j;
	char t;

	len = _strlen(s);
	for (i = 0, j = len - 1; i < len / 2; i++, j--)
	{
		t = s[i];
		s[i] = s[j];
		s[j] = t;
	}
}
