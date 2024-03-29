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
/**
 * _printf -- print elements
 * @format: format specifier
 * Return: count of elements
 **/
int _printf(const char *format, ...)
{
	int i = 0;
	int count = 0;
	va_list(args);

	va_start(args, format);

	if (!format)
	{
		va_end(args);
		return (-1);
	}	
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
			{
				va_end(args);
				return (-1);
			}
			else if (format[i + 1] == '%')
			{
				_putchar('%');
				count++;
				i++;
			}
			else if (cmp_func(format[i + 1]) != NULL)
			{
				count += (cmp_func(format[i + 1]))(args);
				i++;
			}
			else
			{
				_putchar('%');
				_putchar(format[i + 1]);
				count += 2;
				i++;
			}
		}
		else
		{
	
			_putchar(format[i]);
			count++;
		}
	}
	va_end(args);
	return (count);
}
