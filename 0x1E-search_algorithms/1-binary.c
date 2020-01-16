#include "search_algos.h"

/**
 * binary_search - function that searches for a value in an array of integers
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	int l, r, m;

	if (array == NULL)
		return (-1);

	l = 0;
	r = size - 1;

	while (l != r)
	{
		printf("Searching in array = %d\n", l);
		m = ((l + r) / 2);
		if (array[m] > value)
			r = m - 1;
		else
			l = m;
	}
	if (array[l] == value)
		return (array[l]);
	return (-1);
}
