#include "main.h"
#include <stdarg.h>

/**
* _printf - Produces output according to a format.
* @format: A string containing zero or more directives to be written.
* @...: Optional arguments to replace the format specifiers in the format string.
* Return: void
*/

int _printf(const char *format, ...)
{
    va_list args;
    int len = 0;

    va_start(args, format);
    
    while (*format)
    {
        if (*format == '%' && *(format + 1) != '\0')
        {
            format++;
            if (*format == 'c')
            {
                len += print_char(va_arg(args, int));
            }
            else if (*format == 's')
            {
                len += print_string(va_arg(args, const char *));
            }
            else if (*format == '%')
            {
                _putchar('%');
                len++;
            }
            else if (*format == 'd' || *format == 'i')
            {
                len += print_int(va_arg(args, int));
            }
            else
            {
                _putchar('%');
            }
        }
        else
        {
            _putchar(*format);
            len++;
        }
        
        format++;
    }

    va_end(args);
    return (len);
}
