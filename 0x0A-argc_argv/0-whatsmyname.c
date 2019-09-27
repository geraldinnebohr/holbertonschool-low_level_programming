#include <stdio.h>
/**
 *main - prints its name
 *@argc: is an integer
 *@argv: is a character
 *Return: Always 0
 */
int main(int argc, char *argv[])
{
	if (argc < 2)
		printf("%s\n", argv[0]);
	return (0);
}
