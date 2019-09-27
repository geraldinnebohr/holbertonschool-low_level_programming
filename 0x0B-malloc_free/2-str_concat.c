#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>



/**
 *_strlen - returns the length of a string
 *@s: is a character
 * Return: 0;
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return ((1) + _strlen(s + 1));
}

/**
 *str_concat - concatenate 2 strings
 *@s1: is a pointer
 *@s2: is a pointer
 *Return: pointer to array
 */

char *str_concat(char *s1, char *s2)
{
	int i, x, j;
	char *new;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	x = _strlen(s1) + _strlen(s2);

	new = malloc(x + 1);

	if (new == NULL)
		return (NULL);

	i = 0;

	while (s1[i] != '\0')
	{
		new[i] = s1[i];
		i++;
	}

	j = 0;

	while (s2[j] != '\0')
	{
		new[i] = s2[j];
		j++;
		i++;
	}

	new[i] = '\0';

	return (new);
}
