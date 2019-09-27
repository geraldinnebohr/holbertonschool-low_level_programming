#include "holberton.h"
#include <stdlib.h>
/**
 *_strchr - function that locates a character in a string
 *@s: is a pointer
 *@c: is a character
 *Return: Null
 */

char *_strchr(char *s, char c)

{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			break;
	}
	if (s[i] == c)
		return (s + i);
	return (NULL);
}
