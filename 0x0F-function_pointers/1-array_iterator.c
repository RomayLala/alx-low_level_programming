#include "function_pointers.h"

/**
 * array_iterator - Executes a function given as a parameter
 *                  on each element of an array.
 * @array: Array of integers.
 * @size: Size of the array.
 * @action: Pointer to the function to use.
 *
 * Description: This function iterates through the array and
 *              applies the given function to each element.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
    size_t i;
    if (array && action)
        for (i = 0; i < size; i++)
            action(array[i]);
}
