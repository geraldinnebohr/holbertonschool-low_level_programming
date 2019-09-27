#include "holberton.h"

/**
 * print_alphabet_x10 - to print the alphabet 10 times
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char alph = 'a';
	int ten = 0;

	for (ten = 0; ten < 10; ten++)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
		{
			_putchar(alph);
		}
		alph = 'a';
		_putchar('\n');
	}
}
