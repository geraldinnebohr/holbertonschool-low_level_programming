#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_strlen - returns the length of a string
 *@s: is a character
 * Return: 0;
 */

unsigned int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return ((1) + _strlen(s + 1));
}

/**
 *string_nconcat - concatenate 2 strings
 *@s1: is a pointer
 *@s2: is a pointer
 *@n: is an integer
 *Return: pointer to array
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, x;
	char *new;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	x = _strlen(s1) + n + 1;

	if (_strlen(s2) <= n)
		x = _strlen(s1) + _strlen(s2) + 1;

	new = malloc(x);

	if (new == NULL)
		return (NULL);
	i = 0;

	while (s1[i] != '\0')
	{
		new[i] = s1[i];
		i++;
	}

	j = 0;

	while (s2[j] != '\0' && j < n)
	{
		new[i] = s2[j];
		j++;
		i++;
	}

	new[i] = '\0';

	return (new);
}
