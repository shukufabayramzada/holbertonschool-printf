#include "main.h"
#include <unistd.h>
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
	char *null_str = "(null)";

	if (str == NULL)
	{
		while (null_str[i] != '\0')
		{
			_putchar(null_str[i]);
			i++;
		}
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
