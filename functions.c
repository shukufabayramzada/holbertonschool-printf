#include "main.h"
#include <stdio.h>

/**
 * _putchar - prints a character
 * @c: the character to be printed
 * Return: 1 (on success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_char - prints a character
 * @args: number of arguments
 * Return: 1 (on success)
 */
int print_char(va_list args)
{
	char c;

	c = va_arg(args, int);
	_putchar(c);
	return (1);
}

/**
 * print_str - prints string
 * @args: number of arguments
 * Return: length of the string (on success)
 */
int print_str(va_list args)
{
	char *str = va_arg(args, char *);
	int i;

	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	else
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	return (i);
}

/**
 * print_perc - prints a percent sign
 * @args: number of arguments
 * Return: 1 (on success)
 */
int print_perc(va_list args)
{
	(void)args;
	_putchar('%');
	return (1);
}
