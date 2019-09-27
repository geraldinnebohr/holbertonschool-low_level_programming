#include "holberton.h"
#include <stdlib.h>
/**
 *_strstr - locates a substring
 *@haystack: is a pointer
 *@needle: is a pointer
 * Return: number of bytes
 */

char *_strstr(char *haystack, char *needle)
{

	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*n == *haystack && *n != '\0' && *haystack != '\0')
		{
			haystack++;
			n++;
		}
		if (*n == '\0')
			return (h);
		haystack = h + 1;
	}
	return (NULL);
}
