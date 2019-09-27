#include "holberton.h"

/**
 *size - returns the size of a string
 *@s: is a character
 *Return: -1.
 */

int size(char *s)
{
	if (*s == '\0')
		return (0);
	return ((1) + size(s + 1));
}

/**
 *compare - compares variables
 *@s: is a character
 *@x: is an integer
 *@j: is an integer
 *Return: Always 0.
 */

int compare(char *s, int x, int j)
{
	if (x <= j)
		return (1);
	if (s[x - 1] == s[j])
		return (compare(s, x - 1, j + 1));
	return (0);
}

/**
 *is_palindrome - check if a string is a palindrome
 *@s: is a character
 *Return: compare function
 */

int is_palindrome(char *s)
{
	int j;
	int x;

	j = 0;
	x = size(s);

	return (compare(s, x, j));
}
