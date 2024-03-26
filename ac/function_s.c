#include "main.h"

/**
 * print_string - a
 * @arg: a
 *
 * Return: a
*/

int print_string(va_list arg)
{
	int i;
	char *string;

	string = va_arg(arg, char *);

	if (string == NULL)
	{
		string = "(null)";
	}

	for (i = 0; string[i] != '\0'; i++)
	{
		_write(string[i]);
	}

	return (i);
}
