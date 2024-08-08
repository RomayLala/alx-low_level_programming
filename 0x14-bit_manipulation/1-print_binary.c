#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be converted to binary.
 */
void print_binary(unsigned long int n)
{
    /* Flag to indicate if we've started printing */
    int has_started = 0;
    unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);

    /* Iterate through each bit of n from left to right */
    while (mask > 0)
    {
        if (n & mask)
        {
            _putchar('1');
            has_started = 1;
        }
        else if (has_started)
        {
            _putchar('0');
        }
        mask >>= 1;
    }

    /* If n is zero, print '0' */
    if (!has_started)
    {
        _putchar('0');
    }
}
