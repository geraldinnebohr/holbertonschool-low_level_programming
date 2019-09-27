#include "holberton.h"
/**
 *reverse_array - reverses the content of an array of integers
 *@a: is an integer
 *@n: is an integer
 *Return: dest
 */

void reverse_array(int *a, int n)
{
	int i, j;
	int t;

	for (i = 0, j = (n - 1); i < j; i++, j--)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
	}
}
