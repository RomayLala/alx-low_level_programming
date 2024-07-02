#include "main.h"
#include <stdio.h> /* Include for sprintf */

/**
 * print_array - prints n elements of an array of integers
 * @a: array of integers
 * @n: number of elements to print
 *
 * Description: Each integer is converted to a string and printed,
 * separated by comma and space. The output ends with a newline character.
 */
void print_array(int *a, int n)
{
    int i, j;
    char buffer[10];

    for (i = 0; i < n; i++)
    {
        sprintf(buffer, "%d", a[i]);
        for (j = 0; buffer[j] != '\0'; j++)
            _putchar(buffer[j]);
        if (i < n - 1)
        {
            _putchar(',');
            _putchar(' ');
        }
    }
    _putchar('\n');
}
