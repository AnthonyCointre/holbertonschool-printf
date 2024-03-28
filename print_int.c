#include "main.h"

/**
* print_int - a
* @c: a
* print_int - Prints an integer to the standard output.
* @c: The integer to be printed.
*
* Return: a
* Return: void
*/

int print_int(int d)
{
	int len = 0;

	if (d < 0)
	{
	_putchar('-');
	d = -d;
	}

	_putchar(d);
	len++;

	return (len);
}