#include "holberton.h"
#include <stdio.h>

/**
 *print_diagsums - prints the sum of the two diagonals of a square matrix
 *@a: is an integer
 *@size: is an integer
 */

void print_diagsums(int *a, int size)
{
	int i, du, de;

	du = 0;
	de = 0;

	for (i = 0; i < (size * size); i = i + (size + 1))
		du = du + a[i];

	for (i = size - 1; i <= (size * size) - (size - 1); i = i + (size - 1))
		de = de + a[i];

	printf("%d, %d\n", du, de);
}
