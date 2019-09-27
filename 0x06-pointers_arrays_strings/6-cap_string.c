#include "holberton.h"

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
*cap_string - capitalizes each word of the string
*@s: is a character
*Return: char
*/

char *cap_string(char *s)
{
	int i, j;

	char *em = " ,\t\n.;?\"(){}";

	i = 0;

	if (s[i] >= 'a' && s[i] <= 'z')
		s[i] = s[i] - 32;

	for (i = 1; i <= _strlen(s); i++)
	{
		for (j = 0; em[j]; j++)
		{
			if ((s[i] >= 'a' && s[i] <= 'z')
			    && s[i - 1] == em[j])
				s[i] = s[i] - 32;
		}
	}
	return (s);
}
