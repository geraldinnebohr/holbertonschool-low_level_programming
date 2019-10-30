#include "sort.h"

/**
 * shell_sort - function that sorts an array of integers in ascending order
 *@array: array of integers
 *@size: size of the array
 */

void shell_sort(int *array, size_t size)
{
	int i, j, gap;
	int tmp;

	gap = 1;
	tmp = 0;

	while (gap < (int)size)
		gap = (gap * 3) + 1;
	gap = (gap - 1) / 3;

	while (gap > 0)
	{
		for (i = gap; i < (int)size; i++)
		{
			for (j = i; (j - gap) >= 0 && array[j] < array[j - gap]; j -= gap)
			{
				tmp = array[j];
				array[j] = array[j - gap];
				array[j - gap] = tmp;
			}
		}
		print_array(array, size);
		gap = (gap - 1) / 3;
	}
}
