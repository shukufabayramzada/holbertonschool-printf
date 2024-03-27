#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>

/**
 * struct specifiers - Struct for specifiers
 * @spec: format specifiers that we check
 * @func: The function associated
 **/
typedef struct specifiers
{
	char *spec;
	int (*func)(va_list arg);
} spec_type;
#endif
