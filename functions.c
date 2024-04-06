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
 * print_int - print an integer
 * @args: number of argument
 * Return: count of numbers
 **/
int print_int(va_list args)
{
	unsigned int i = 0;
	unsigned int div = 1;
	int numb = va_arg(args, int);
	unsigned int tmp;

	if (numb < 0)
	{
		_putchar('-');
		i++;
		tmp = -numb;
	}
	else
	{
		tmp = numb;
	}
	while (tmp / div > 9)
	{
		div *= 10;
	}
	while (div >= 1)
	{
		_putchar ((tmp / div) + 48);
		i++;
		tmp %= div;
		div /= 10;
	}
	return (i);
}
/**
 * print_binary - Prints the binary representation of an unsigned integer
 * @args: The va_list containing the unsigned integer
 * Return: The number of characters printed
 **/
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




