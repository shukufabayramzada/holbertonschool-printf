#include "main.h"
#include "functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * _printf -- print elements
 * @format: format specifier
 * Return: count of elements
 **/
int _printf(const char *format, ...)
{
	int i = 0, count = 0

	va_list(args);
	va_start(args, format);
	if (!format)
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (!format[i + 1])
				return (-1);
			else if (format[i + 1] == '%')
			{
				count += _putchar('%');
			}
			else if (cmp_func(format[i + 1]) != NULL)
			{
			count += (cmp_func(format[i + 1]))(args);
			i++;
			}
			else
				count += _putchar('%') + _putchar(format[i + 1]);
				i++;
		}
		else
			count += _putchar(format[i]);
	}
	va_end(args);
	return (count);
}
