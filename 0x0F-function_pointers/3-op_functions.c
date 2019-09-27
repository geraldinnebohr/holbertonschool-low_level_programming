#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - operations
 *@a: is a pointer to char
 *@b: is a pointer to char
 *Return: NULL
 */


int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - operations
 *@a: is a pointer to char
 *@b: is a pointer to char
 *Return: NULL
 */


int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - operations
 *@a: is a pointer to char
 *@b: is a pointer to char
 *Return: NULL
 */

int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - operations
 *@a: is a pointer to char
 *@b: is a pointer to char
 *Return: NULL
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - operations
 *@a: is a pointer to char
 *@b: is a pointer to char
 *Return: NULL
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
