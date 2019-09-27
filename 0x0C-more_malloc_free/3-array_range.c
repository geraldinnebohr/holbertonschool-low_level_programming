#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *array_range - function that creates an array of integers
 *@min: is an integer
 *@max: is an integer
 *Return: Pointer
 */

int *array_range(int min, int max)
{
	int *s;
	int i, rest;

	if (min > max)
		return (NULL);

	rest = max - min;

	s = malloc(sizeof(int) * (rest + 1));

	if (s == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		s[i] = min;
		min++;
	}

	return (s);
}
