#include "main.h"
#include <stdio.h> /* Include stdio.h for printf and putchar */

/**
 * print_buffer - prints the content of a buffer
 * @b: pointer to the buffer to print
 * @size: number of bytes to print
 *
 * Description: Prints the content of a buffer in a specified format:
 * - Hexadecimal offset followed by colon
 * - Hexadecimal values (2 chars per byte)
 * - Corresponding characters (printable characters or '.')
 */
void print_buffer(char *b, int size)
{
    int i, j;

    for (i = 0; i < size; i += 10)
    {
        /* Print hexadecimal offset */
        printf("%08x: ", i);

        /* Print hexadecimal values */
        for (j = 0; j < 10; j++)
        {
            if (i + j < size)
                printf("%02x", *(b + i + j));
            else
                printf("  ");

            if (j % 2 != 0)
                printf(" ");
        }

        /* Print characters */
        for (j = 0; j < 10; j++)
        {
            if (i + j < size)
            {
                if (*(b + i + j) >= 32 && *(b + i + j) <= 126)
                    putchar(*(b + i + j));
                else
                    putchar('.');
            }
            else
            {
                putchar(' ');
            }
        }

        putchar('\n');
    }
}
