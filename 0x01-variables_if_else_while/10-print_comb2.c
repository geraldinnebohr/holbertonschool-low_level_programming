#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num1 = 0;
	int num2 = 0;
	int comma = 44;
	int space = ' ';

	for (num1 = 48; num1 <= 57; num1++)
	{
		for (num2 = 48; num2 <= 57; num2++)
		{
			putchar(num1);
			putchar(num2);
			if (num1 < 57 || num2 < 57)
			{
				putchar(comma);
				putchar(space);
			}
		}
	}
	putchar ('\n');

	return (0);
}
