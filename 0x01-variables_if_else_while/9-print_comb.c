#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of single-digit numbers
 *              separated by ", " in ascending order using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int digit = '0';

    while (digit <= '9')
    {
        putchar(digit);

        if (digit != '9')
        {
            putchar(',');
            putchar(' ');
        }

        digit++;
    }

    putchar('\n');

    return (0);
}
