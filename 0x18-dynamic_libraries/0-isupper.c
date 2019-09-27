#include "holberton.h"
/**
 * _isupper - Print if a character is uppercase
 * Return: 0
 * @c: input a character
 */
int _isupper(int c)
{

	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
