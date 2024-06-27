#include "main.h"
#include <stdio.h>

/**
 * print_number - Prints a number followed by a space
 * @n: Number to print
 */
void print_number(int n)
{
    /* Handling the negative numbers */
    if (n < 0)
    {
        _putchar('-');
        n = -n;
    }

    /* Print the number */
    if (n / 10)
        print_number(n / 10);
    _putchar((n % 10) + '0');
}

/**
 * print_fizzbuzz - Prints numbers from 1 to 100 with FizzBuzz condition
 */
void print_fizzbuzz(void)
{
    int i;

    for (i = 1; i <= 100; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
            printf("FizzBuzz");
        else if (i % 3 == 0)
            printf("Fizz");
        else if (i % 5 == 0)
            printf("Buzz");
        else
            print_number(i);

        if (i < 100)
            _putchar(' ');
    }
    _putchar('\n');
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    print_fizzbuzz();
    return (0);
}
