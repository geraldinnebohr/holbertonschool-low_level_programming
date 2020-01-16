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
	size_t i;

	if (array == NULL)
		return (-1);

	l = 0;
	r = size - 1;

	while (l <= r)
	{
		printf("Searching in array: ");
		for (i = l; i <= (size_t)r; i++)
		{
			printf("%d", array[i]);
			if (i != (size_t)r)
				printf(", ");
		}
		printf("\n");
		m = ((l + r) / 2);
		if (array[m] < value)
			l = m + 1;
		else if (array[m] > value)
			r = m - 1;
		else
			return (m);
	}
	return (-1);
}
