#include "main.h"

/**
 * _printf - a
 * @format: a
 *
 * Return: a
*/

int _printf(const char *format, ...)
{
	va_list args;
    char *string;
    char character;
    int operateur = 0;
    int i = 0;
    char current_format;

	va_start(args, format);

    while (format && format[i])
    {
        current_format = format[i];
        if (current_format = '%')
        {
            operateur = 1;
        }

    if (operateur = 1)
    {
        if (current_format = 's')
        _putchar(va_arg(args, char*))


    }
        _putchar(*format);
        i++;
    }


}

/**
 * main - a
 *
 * Return: a
*/

int main(void)
{
	return (0);
}
