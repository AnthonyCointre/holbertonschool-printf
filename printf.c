#include "main.h"

/**
 * _printf - a
 * @format: a
 * @...: a
 *
 * Return: a
*/

int _printf(const char *format, ...)
{
	va_list args;

	conver_t funcs[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{NULL, NULL}
	};

	if (format == NULL)
	{
		return (-1);
	}

	va_start(args, format);

	va_end(args);
	return (0);
}
