#include "main.h"
#include "functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * cmp_func - compares a format specifier character and returns a
 *             corresponding function pointer to handle the argument
 * @s: format specifier character to compare
 *
 * Return: function pointer to handle the argument corresponding to
 *         the format specifier, or NULL if the format specifier is not
 *         recognized
 */

int (*cmp_func(const char s))(va_list)
{
	spec_type tyeps[] = {
		{'c', print_char},
		{'s', print_str},
		{'d', print_d},
		{'%', print_perc},
		{'i', print_d},
		{'\0', NULL}
	};
	int i = 0;

	while (types[i].spec != NULL && *(types[i].spec) != *s)
	{
		i++;
	}
	return (types[i].func);
}
