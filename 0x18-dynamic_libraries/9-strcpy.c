#include "holberton.h"

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
