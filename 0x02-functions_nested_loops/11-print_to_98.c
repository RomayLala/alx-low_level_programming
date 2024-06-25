#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: starting number
 */
void print_to_98(int n)
{
    int i;

    if (n <= 98)
    {
        for (i = n; i <= 98; i++)
        {
            _putchar(i / 10 + '0');  /* Print tens digit if i >= 10 */
            _putchar(i % 10 + '0');  /* Print ones digit */
            if (i != 98)
            {
                _putchar(',');   /* Print comma and space if not the last number */
                _putchar(' ');
            }
        }
    }
    else
    {
        for (i = n; i >= 98; i--)
        {
            _putchar(i / 10 + '0');  /* Print tens digit if i >= 10 */
            _putchar(i % 10 + '0');  /* Print ones digit */
            if (i != 98)
            {
                _putchar(',');   /* Print comma and space if not the last number */
                _putchar(' ');
            }
        }
    }
    _putchar('\n');   /* Print newline at the end */
}
