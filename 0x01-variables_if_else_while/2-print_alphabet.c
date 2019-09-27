#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alph = 'a';

	for (alph = 'a'; alph <= 'z'; alph++)
		putchar(alph);
	putchar('\n');

	return (0);
}
