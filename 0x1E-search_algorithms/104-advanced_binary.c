#include "search_algos.h"

/**
 * print_array - Prints an array
 * @array: Pointer to the first element of the array to print
 * @left: Left index of the subarray
 * @right: Right index of the subarray
 */
void print_array(int *array, size_t left, size_t right)
{
    size_t i;

    printf("Searching in array: ");
    for (i = left; i <= right; i++)
    {
        printf("%d", array[i]);
        if (i < right)
            printf(", ");
    }
    printf("\n");
}

/**
 * advanced_binary_recursive - Recursively searches for a value in a sorted array
 * @array: Pointer to the first element of the array to search in
 * @left: Left index of the subarray
 * @right: Right index of the subarray
 * @value: Value to search for
 *
 * Return: Index where value is located or -1 if not found
 */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
    size_t mid;

    if (left > right)
        return (-1);

    print_array(array, left, right);
    mid = left + (right - left) / 2;

    if (array[mid] == value)
    {
        if (mid == left || array[mid - 1] != value)
            return ((int)mid);
    }

    if (array[mid] >= value)
        return (advanced_binary_recursive(array, left, mid, value));
    return (advanced_binary_recursive(array, mid + 1, right, value));
}

/**
 * advanced_binary - Searches for a value in a sorted array of integers
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index where value is located or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
    if (!array || size == 0)
        return (-1);
    return (advanced_binary_recursive(array, 0, size - 1, value));
}
