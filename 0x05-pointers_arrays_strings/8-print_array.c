#include "holberton.h"
#include <stdio.h>

/**
 *print_array - function that prints n elements of an array of integers
 *@a: is an array
 *@n: is an integer
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < (n - 1))
			printf(", ");
	}
	printf("\n");
}
