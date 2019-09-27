#include <stdio.h>
/**
 *main - prints its name
 *@argc: is an integer
 *@argv: is a character
 *Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

		for (i = 0; i < argc; i++)
			printf("%s\n", argv[i]);
	return (0);
}
