#include "main.h"

/**
 * get_bit - Retrieves the value of a bit at a given index.
 * @n: The number to search the bit in.
 * @index: The index of the bit starting from 0.
 *
 * Return: The value of the bit at index `index` or -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
    if (index >= (sizeof(unsigned long int) * 8))
        return (-1);

    return ((n >> index) & 1);
}
