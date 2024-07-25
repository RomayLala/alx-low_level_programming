#include "variadic_functions.h"

void print_char(va_list args, char *sep)
{
    printf("%s%c", sep, va_arg(args, int));
}

void print_int(va_list args, char *sep)
{
    printf("%s%d", sep, va_arg(args, int));
}

void print_float(va_list args, char *sep)
{
    printf("%s%f", sep, va_arg(args, double));
}

void print_string(va_list args, char *sep)
{
    char *str = va_arg(args, char *);
    if (!str)
        str = "(nil)";
    printf("%s%s", sep, str);
}

/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
    va_list args;
    int i = 0;
    char *sep = "";

    va_start(args, format);
    while (format && format[i])
    {
        switch (format[i])
        {
        case 'c':
            print_char(args, sep);
            break;
        case 'i':
            print_int(args, sep);
            break;
        case 'f':
            print_float(args, sep);
            break;
        case 's':
            print_string(args, sep);
            break;
        }
        sep = ", ";
        i++;
    }
    printf("\n");
    va_end(args);
}
