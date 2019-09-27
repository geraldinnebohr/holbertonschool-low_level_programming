#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alph;

	alph = 'a';
	while (alph <= 'z')
	{
		putchar (alph);
		(alph++);
		if (alph == 'q' || alph == 'e')
		(alph++);
	}
	{
		putchar('\n');
	}
	return (0);
}
