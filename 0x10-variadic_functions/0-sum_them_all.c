#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: is a variable of integer type
 * Return: 0 or sum variable
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list parameters_list;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(parameters_list, n);

	for (i = 0; i < n; i++)
		sum += va_arg(parameters_list, unsigned int);

	va_end(parameters_list);

	return (sum);
}
