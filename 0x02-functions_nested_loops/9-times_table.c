#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
    int row, column, product;

    for (row = 0; row <= 9; row++)
    {
        for (column = 0; column <= 9; column++)
        {
            product = row * column;

            if (column == 0)
                _putchar('0'); /* Print '0' for the first element in each row */
            else
            {
                /* Print comma and space for proper formatting */
                _putchar(',');
                _putchar(' ');

                /* Print the product with proper formatting */
                if (product >= 10)
                    _putchar(product / 10 + '0'); /* Print tens digit */
                else
                    _putchar(' '); /* Print space if no tens digit */
            }

            /* Print units digit of the product */
            _putchar(product % 10 + '0');
        }
        /* Print new line after each row */
        _putchar('\n');
    }
}
