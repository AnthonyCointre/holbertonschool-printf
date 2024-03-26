#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/* gcc printf_test.c _putchar.c function_c.c function_s.c function_%.c -o printf_test */

int _printf(const char *format, ...)
{
    va_list args;
    int i = 0; 
    int pourcent = 0;
    int num = 0;

    conver_t f_list[] = {
        {"c", print_char},
        {"s", print_string},
        {"%", print_percent},
        {NULL, NULL}
    };

    if (format == NULL)
        return (-1);

    va_start(args, format);

    while (format[i])
    {
        if (pourcent == 0)
        {
            if (format[i] == '%')
            {
                pourcent = 1;
            }
            else 
            {
                _putchar(format[i]);
                num++;
            }
        }
        else if (pourcent == 1)
        {
            int j = 0;
            while (f_list[j].symbol != NULL)
            {
                if (*(f_list[j].symbol) == format[i])
                {
                    num += f_list[j].f(args);
                    pourcent = 0;
                    break;
                }
                j++;
            }
            if (f_list[j].symbol == NULL)
            {
                _putchar('%');
                _putchar(format[i]);
                num += 2; // Compter les deux caractères ("%c" ou "%s" non valides)
                pourcent = 0;
            }
        }
        i++;
    }

    va_end(args);
    return (num);
}

#include <limits.h>
#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0
*/
int main(void)
{
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    return (0);
}
