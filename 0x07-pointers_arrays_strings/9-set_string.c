#include "holberton.h"

/**
 *set_string - function that sets the value of a pointer to a char
 *@s: is a double pointer
 *@to: is a single pointer
 */

void set_string(char **s, char *to)
{
	*s = to;
}
