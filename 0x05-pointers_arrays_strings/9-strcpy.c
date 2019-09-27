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
 *_strcpy - copies the string
 *@src: is an array
 *@dest: is an array
 *Return: First array value
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int len;

	len = _strlen(dest);
	len--;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (src);
}
