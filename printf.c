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

	conver_t f_list[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{NULL, NULL}
	};

	va_list arg_list;

	if (format == NULL)
		return (-1);

	va_start(arg_list, format);

	va_end(arg_list);
	return (0);
}
