#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");

    _printf("%d\n", 1024);
    _printf("%d\n", -1024);
    printf("%d\n", 1024);
    printf("%d\n", -1024);

    return (0);
}
