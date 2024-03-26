#include "main.h"

/**
* print_string - a
* @s: a
*
* Return: a
*/

void print_string(const char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
}
