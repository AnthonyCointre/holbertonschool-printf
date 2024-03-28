#include "main.h"

/**
* print_int - Prints an integer to the standard output.
* @d: The integer to be printed.
*
* Return: Length
*/

int print_int(int d)
{
	int len = 0;
	int num;

	if (d < 0)
	{
	_putchar('-');
	d = -d;
	}

	if (d == 0)
	{
		_putchar('0');
		return (1);
	}

	while (d != 0)
	{
		num = d % 10;
		_putchar(num + '0');
		d /= 10;
		len++;
	}

	return (len);
}