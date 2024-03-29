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
	spec_type types[] = {
		{'c', print_char},
		{'s', print_str},
		{'\0', NULL}
	};
	int i;

	for (i = 0; types[i].spec != '\0'; i++)
	{
		if (types[i].spec == s)
		{
			return (types[i].func);
		}
	}
	return (0);
}
