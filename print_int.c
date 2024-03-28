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

int print_int(int c)
{
	int len = 0;

	if (c < 0)
	{
	_putchar('-');
	c = -c;
	}

	_putchar(c);
	len++;

	return (len);
}