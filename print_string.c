#include "main.h"

/**
* print_string - Prints a string to the standard output.
* @s: The string to be printed.
*
* Return: void
*/

int print_string(const char *s)
{

	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	return (*s);
}
