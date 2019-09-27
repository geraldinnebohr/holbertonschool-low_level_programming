#include "holberton.h"

/**
 * print_alphabet - to print the alphabet
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char alph = 'a';

	for (alph = 'a'; alph <= 'z'; alph++)
		_putchar(alph);
	_putchar('\n');

}
