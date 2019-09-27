#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * any_char - function that prints a character
 * @input: list that store the arguments
 */
void any_char(va_list input)
{
	int arg = 0;

	arg = va_arg(input, int);
	printf("%c", arg);
}
/**
 * any_integer - function that prints an integer
 * @input: list that store the arguments
 */
void any_integer(va_list input)
{
	int arg = 0;

	arg = va_arg(input, int);
	printf("%d", arg);
}
/**
 * any_float - function that prints a float
 * @input: list that store the arguments
 */
void any_float(va_list input)
{
	float arg = 0;

	arg = va_arg(input, double);
	printf("%f", arg);
}
/**
 * any_charp - function that prints a string
 * @input: list that store the arguments
 */
void any_charp(va_list input)
{
	char *arg = 0;

	arg = va_arg(input, char *);
	if (arg == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", arg);
}
/**
 * print_all - function that prints anything
 * @format: types of input
 */
void print_all(const char * const format, ...)
{
	int i, j, k;

	any_w ip[] = {
		{"c", any_char},
		{"i", any_integer},
		{"f", any_float},
		{"s", any_charp}
	};
	va_list input;

	va_start(input, format);

	i = 0;
	k = 0;
	while (format != NULL && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == ip[j].any[0])
			{
				switch (k)
				{
				case 0:
					break;
				default:
					printf(", ");
				}
				ip[j].f(input);
				k++;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(input);
}
