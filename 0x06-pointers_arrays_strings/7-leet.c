#include "holberton.h"

/**
 *leet - function that encodes a string into 1337
 *@s: is a pointer
 *Return: s
 */

char *leet(char *s)
{
	char *a = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *b = "4BCD3FGHIJK1MN0PQRS7UVWXYZ4bcd3fghijk1mn0pqrs7uvwxyz";
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; a[j]; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = b[j];
			}
		}
	}
	return (s);
}
