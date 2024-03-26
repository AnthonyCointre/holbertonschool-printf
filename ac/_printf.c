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
