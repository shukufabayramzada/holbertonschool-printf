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
		{'%', print_perc},
		{'\0', NULL}
	};
	int i = 0;

	while (types[i].spec != NULL && types[i].spec != s)
	{
		i++;
	}
	return (types[i].func);
}
/**
 * _printf -- print elements
 * @format: format specifier
 * Return: count of elements
 **/
int _printf(const char *format, ...)
{
	int i = 0;
	int count = 0;
	va_list args;

	int (*func_ptr)(va_list);

	va_start(args, format);
	if (format == NULL)
	{
		return (-1);
	}
	
	while (format[i])
	{
		if (format[i] == '%' && (format[i + 1] == NULL || format[i + 1] == '\0'))
		{
			return (-1);
		}
		if (format[i] == '%')
		{
			func_ptr = cmp_func(format[i + 1]);
			if (func_ptr)
			{
				count += func_ptr(args);
				i += 2;
				continue;
			}
		}
		_putchar(format[i]);
		i++;
		count++;
	}
	va_end(args);
	return (count);
}

