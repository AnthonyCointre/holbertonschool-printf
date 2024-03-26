#include <stdarg.h>
#include "main.h"

int print_char(va_list arg)
{
    char c = va_arg(args, int);
    _putchar(c);
    return (1);
}