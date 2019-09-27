#include <stdlib.h>
#include <stddef.h>
#include "function_pointers.h"

/**
 *array_iterator - function that executes a function
 *@array: pointer to integer
 *@size: variable
 *@action: pointer to function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (action != NULL)
	{
		if (array != NULL)
		{
			if (size != 0)
			{
				for (i = 0; i < (int)size; i++)
					action(array[i]);
			}
		}
	}
}
