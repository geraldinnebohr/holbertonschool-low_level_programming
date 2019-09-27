#ifndef VARIADIC_H
#define VARIADIC_H
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struct any - function structure
 * @any: pointer to char
 * @f: function pointer
 */

typedef struct any
{
	char *any;
	void (*f)();
} any_w;
void any_char(va_list input);
void any_integer(va_list input);
void any_float(va_list input);
void any_charp(va_list input);
#endif
