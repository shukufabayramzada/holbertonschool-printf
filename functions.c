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
 * print_int - print integers
 * @args: number of arguments
 * Return: count
 **/
int print_int(va_list args)
{
	int count = 0;
	int numb = va_arg(args, int);
	int tmp,base;

	if (numb < 0)
	{
		_putchar('-');
		count++;
		tmp = -numb;
	}
	if (numb >= 0 && numb <= 9)
	{
		tmp = numb;
		_putchar(temp + 48);
		count++;
	}
	if (numb > 9)
	{
		base = 10;
		while (numb / base > 9)
		{
			base *= 10;
		}
		while (base > 0)
		{
			tmp = numb / base;
			numb = numb % base;
			_putchar(temp + 48);
			base = base / 10;
			count++;
		}
	}
	return (count);
}



