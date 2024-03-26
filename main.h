#ifndef PRINTF_H
#define PRINTF_H

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * struct convert - a
 * @symbol: a
 * @f: a
*/

typedef struct convert
{
	char *symbol;
	int (*f)(va_list);
} conver_t;

int print_char(va_list);
int print_string(va_list);
int print_percent(va_list);
int _printf(const char *format, ...);
int _putchar(char c);

#endif
