i#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

/**
 * struct specifiers - Struct for specifiers
 * @spec: format specifiers that we check
 * @func: The function associated
 **/
typedef struct specifiers
{
	char *spec;
	int (*(*func))(va_list);
} spec_type;

int _printf(const char *format, ...);
int (*cmp_func(const char s))(va_list);
#endif
