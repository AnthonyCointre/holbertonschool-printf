#include "main.h"

/**
* _printf - Produces output according to a format.
* @format: A string containing zero or more directives to be written.
* @...: Optional arguments to replace the format specifiers in the format string.
* gcc _printf.c _putchar.c print_string.c print_char.c print_int.c  main.c -o printf
* Return: void
*/

void _printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%' && *(format + 1) != '\0')
		{
			format++;
			if (*format == 'c')
			{
				print_char(va_arg(args, int));
			}

			else if (*format == 's')
			{
				print_string(va_arg(args, const char *));
			}

			else if (*format == '%')
			{
				_putchar('%');
			}

			else if (*format == 'd' || *format == 'i')
			{
				print_int(va_arg(args, int));
			}

			/* else if (*format == 'b')
			{
				convert_binary(va_arg(args, unsigned int));
			} */

			else
			{
				_putchar('%');
				_putchar(*format);
			}
		}

		else
		{
			_putchar(*format);
		}

		format++;
	}

	va_end(args);
}
