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
	unsigned int num;

	if (d < 0)
	{
	_putchar('-');
	num = -d;
	len++;
	}

	if (d == 0)
	{
		_putchar('0');
		return (1);
	}

	if (d > 0)
	num = d;

	if (num / 10 != 0)
	len += print_int(num / 10);

	_putchar((num % 10) + '0');
	len++;

	return (len);
}
