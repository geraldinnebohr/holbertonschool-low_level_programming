#include "holberton.h"
/**
 *_strcmp - compares 2 strings
 *@s1: is an integer
 *@s2: is an integer
 *Return: comparison
 */

int _strcmp(char *s1, char *s2)
{
	int i, j, sum;

	sum = 0;

	for (i = 0; s1[i] != '\0'; i++)
	{ }

	for (j = 0; s2[j] != '\0'; j++)
	{
		if (s1[j] != s2[j])
		{
			sum = s1[j] - s2[j];
			return (sum);
		}
	}
	return (s1[i] - s2[i]);
}
