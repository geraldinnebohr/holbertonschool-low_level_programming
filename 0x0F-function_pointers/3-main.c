#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - principal
 *@argc: is an int
 *@argv: is a char
 *Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc == 4)
	{
		if (argv[2][0] == '+' || argv[2][0] == '-' || argv[2][0] == '*'
		    || argv[2][0] == '/' || argv[2][0] == '%')
		{
			if (argv[2][1] == '\0')
			{
				printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
			}
			else
			{
				printf("Error\n");
				exit(99);
			}
		}
		else
		{
			printf("Error\n");
			exit(99);
		}
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
	return (0);
}
