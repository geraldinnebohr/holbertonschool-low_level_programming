#include "holberton.h"
/**
 * main - print the array holberton
 *
 * Return: 0
 */
int main(void)
{
	char n[] = "Holberton";
	int i = 0;

	for (i = 0; i < 9 ; i++)
	{
	_putchar(n[i]);
	}
	_putchar('\n');
	return (0);
}
