#include "main.h"
#include "functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_binary - Prints the binary representation of an unsigned integer
 * @args: The va_list containing the unsigned integer
 *
 * Return: The number of characters printed
 */
int print_binary(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int count = 0;
	int binary[32];
	int i = 0, j;

	while (num > 0)
	{
		binary[i] = num % 2;
		num /= 2;
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(binary[j] + '0');
		count++;
	}

	return (count);
}

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
		{'i', print_int},
		{'d', print_int},
		{'b', print_binary},
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
