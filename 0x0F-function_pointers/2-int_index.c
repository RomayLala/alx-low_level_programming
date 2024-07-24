#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - Searches for an integer in an array
 * @array: Array of integers
 * @size: Number of elements in the array
 * @cmp: Pointer to the function to compare values
 *
 * Return: Index of the first matching element, or -1 if none found or size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
    int i;

    if (array == NULL || cmp == NULL || size <= 0)
        return (-1);
    for (i = 0; i < size; i++)
    {
        if (cmp(array[i]) != 0)
            return (i);
    }
    return (-1);
}
