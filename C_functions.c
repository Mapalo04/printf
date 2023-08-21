#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * _putchar - writes a characcter to the screen
 * @c: the character to write
 *
 * Return: 1 if successful
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_number - prints a number
 * @n: number to print
 *
 */
void print_number(int n)
{
	unsigned int a = n;

	if (n < 0)
{
		_putchar('-');
		a = a * -1;
}
	if (a / 10)
{
		print_number(a / 10);
}
	_putchar((a % 10) + '0');
}


/**
 * print_string - prints a string
 * @str: the string to print
 *
 */
void print_string(char *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i++)
        _putchar(str[i]);
}

