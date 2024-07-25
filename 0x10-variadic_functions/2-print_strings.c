#include "variadic_functions.h"
#include <stdlib.h>

/**
 * _print_string - Prints a string.
 * @str: The string to be printed.
 */
void _print_string(char *str)
{
    if (str == NULL)
        str = "(nil)";

    while (*str)
        _putchar(*str++);
}

/**
 * _print_separator - Prints the separator.
 * @separator: The separator string.
 */
void _print_separator(const char *separator)
{
    while (*separator)
        _putchar(*separator++);
}

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between the strings.
 * @n: The number of strings passed to the function.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
    va_list args;
    unsigned int i;

    va_start(args, n);

    for (i = 0; i < n; i++)
    {
        _print_string(va_arg(args, char *));
        if (separator != NULL && i < n - 1)
            _print_separator(separator);
    }
    _putchar('\n');

    va_end(args);
}
