#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alph = 'a';
	char al = 'A';

	for (alph = 'a'; alph <= 'z'; alph++)
		putchar(alph);
	for (al = 'A'; al <= 'Z'; al++)
		putchar(al);
	putchar('\n');

	return (0);
}
