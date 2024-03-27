#include "main.h"

/**
* _printf - a
* @format: a
* @...: a
*
* Return: a
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
				print_percent();
			}

			else if (*format == 'd' || *format == 'i')
			{
				print_int(va_arg(args, int));
			}

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
