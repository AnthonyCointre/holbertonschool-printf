#ifndef _PRINTF_H
#define _PRINTF_H

#include <stdio.h>
#include <stdarg.h>

int _putchar(char c);
void _printf(const char *format, ...);
void print_char(int c);
void print_string(const char *s);
void print_percent(void);
void print_int(int c);

#endif
