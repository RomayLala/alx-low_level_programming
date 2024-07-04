#include <unistd.h> /* Include the header file for the write function */
#include "main.h"

/**
 * _putchar - writes a character to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
    return write(1, &c, 1); /* Use write function from <unistd.h> */
}

/**
 * print_sign - prints the sign of a number
 * @n: number to check
 *
 * Return: 1 if positive, 0 if zero, -1 if negative
 */
int print_sign(int n)
{
    if (n > 0)
    {
        _putchar('+');  /* Print '+' for positive number */
        return 1;
    }
    else if (n == 0)
    {
        _putchar('0');  /* Print '0' for zero */
        return 0;
    }
    else
    {
        _putchar('-');  /* Print '-' for negative number */
        return -1;
    }
}
