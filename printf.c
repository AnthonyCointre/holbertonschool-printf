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
	int i;

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

	i = recording_error(format, f_list, arg_list);
	va_end(arg_list);
	return (i);
}
