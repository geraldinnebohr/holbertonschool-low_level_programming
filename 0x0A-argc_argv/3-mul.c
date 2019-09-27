#include <stdio.h>
#include <stdlib.h>
/**
 *main - prgram multiplies 2 numbers
 *@argc: is an integer
 *@argv: is a character
 *Return: Always 0
 */
int main(int argc, char *argv[])
{
	int mul;

	if (argc > 2)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
