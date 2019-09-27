#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - function that prints a string
 * @n: is a variable of integer type
 * @separator: is a pointer to char
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list parameters_list;
	char *print;
	unsigned int i;

	va_start(parameters_list, n);

	for (i = 0; i < n; i++)
	{
		print = va_arg(parameters_list, char *);

		if (print == NULL)
			printf("(nil)");
		else
			printf("%s", print);

		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(parameters_list);

}
