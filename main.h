#ifndef _PRINTF_H
#define _PRINTF_H

#include <stdio.h>
#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(int c);
int print_string(const char *s);
/* void print_percent(void); */
int print_int(int d);


#endif
