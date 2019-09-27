#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *create_array - creates an array of chars
 *@size: is an integer
 *@c: is a character
 *Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	if (size == 0)
		return (NULL);

		i = 0;

		while (i < size)
		{
			s[i] = c;
			i++;
		}
		s[i] = '\0';
		return (s);
}
