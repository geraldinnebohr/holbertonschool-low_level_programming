#include "holberton.h"
#include <stdio.h>
#include <limits.h>

/**
 * _atoi - extracts an integer from a strings and returns it
 * @s: pointer to the string
 * Return: result, the extracted integer. INT_MIN if INT_MIN is within
 * the string. 0 if string is empty or it doesn't contain any number.
 */
int _atoi(char *s)
{
	int i, result, sign, first, last;

	sign = 1;
	first = -1;
	last = -1;
	if (*s == '\0')
		return (0);
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			if (first == -1)
				first = i;
			last = i;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
		}
		if (s[i + 1] == '\0')
			return (0);
	}
	for (i = 0; i <= first; i++)
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] == '+')
			sign *= 1;

	result = s[first] - '0';
	for (i = first + 1; i <= last; i++)
		if (sign == -1 && result == (INT_MAX / 10) && s[i] == '8')
		{
			sign = 0;
			result = INT_MIN;
		}
		else
			result = (result * 10) + (s[i] - '0');
	if (sign == -1)
		result *= -1;

	return (result);
}
