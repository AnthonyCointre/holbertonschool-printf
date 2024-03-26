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

struct convert
{
	char *symbol;
	int (*f)(va_list);
};
typedef struct convert conver_t;

int print_char(va_list arg);
int print_string(va_list arg);
int print_percent(va_list arg);
int _printf(const char *format, ...);
int _putchar(char c);

#endif
