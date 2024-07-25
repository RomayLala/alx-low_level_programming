#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
    va_list args;
    unsigned int i;

    va_start(args, n);
    for (i = 0; i < n; i++)
    {
        print_number(va_arg(args, int));
        if (separator != NULL && i != n - 1)
            print_separator(separator);
    }
    printf("\n");
    va_end(args);
}

/**
 * print_number - Prints a number.
 * @num: The number to print.
 */
void print_number(int num)
{
    printf("%d", num);
}

/**
 * print_separator - Prints the separator string.
 * @separator: The separator string to print.
 */
void print_separator(const char *separator)
{
    printf("%s", separator);
}
