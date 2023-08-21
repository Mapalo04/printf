#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>



int _printf(const char *format, ...)
{
    int i, len = 0, new_len;
    char *arg_s;
    va_list specs;

    while (format[len] != '\0')
        len++;
    new_len = len;
    va_start (specs, format);
    for (i = 0; i < len; i++)
    {
        if (format[i] == '%')
        {
            switch (format[i+1])
            {
            case 'c':
                print_string(va_arg(specs, char *));
                break;
            case 's':
                arg_s = va_arg(specs, char *);
                print_string(arg_s);
                break;
            case '%':
                _putchar('%');
                break;
            case 'd':
                print_number(va_arg(specs, int));
                break;
            case 'i':
                print_number(va_arg(specs, int));
                break;
            default:
                _putchar(format[i+1]);
            }
            i += 2;
            new_len--;
        }
        _putchar(format[i]);
    }
    va_end(specs);
    return (new_len);
}
