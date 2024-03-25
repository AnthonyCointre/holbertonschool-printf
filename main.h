#ifndef PRINTF_H
#define PRINTF_H

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * struct printer - a
 * @symbol: a
 * @print: a
 */

typedef struct printf
{
	char *symbol;
	void (*print)(va_list arg);

} printf_t;

void print_char(va_list arg);
void print_string(va_list arg);
int _printf(const char *format, ...);
int _putchar(char c);

#endif
