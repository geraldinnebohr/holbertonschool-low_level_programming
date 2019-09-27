#include "holberton.h"
#include <stdio.h>
/**
 * _strchr - locates a character in a string
 * @s: input string
 * @c: input character to locates in string
 *
 * Return: matric with character or NULL
 */

char *_strchr(char *s, char c)
{
	int a = 0;

	while (s[a] != '\0')
	{
		if (s[a] == c)
		{
			return (s = s + a);
		}
		a = a + 1;
	}
	if (s[a] == '\0' && c == '\0')
	{
		return (s = s + a);
	}
	else
	{
		return (NULL);
	}
}
