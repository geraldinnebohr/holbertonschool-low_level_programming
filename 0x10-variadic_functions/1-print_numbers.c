#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that prints number
 * @n: is a variable of integer type
 * @separator: is a pointer to char
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list parameters_list;
	int print = 0;
	unsigned int i;

	va_start(parameters_list, n);

	for (i = 0; i < n; i++)
	{
		print = va_arg(parameters_list, unsigned int);
		printf("%d", print);

		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(parameters_list);

}
