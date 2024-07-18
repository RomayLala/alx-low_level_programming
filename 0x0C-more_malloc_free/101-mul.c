#include "main.h"
#include <stdlib.h>

/**
 * print_error - Prints "Error" followed by a newline to stderr
 */
void print_error(void)
{
    char *error_msg = "Error\n";
    int i;

    for (i = 0; error_msg[i] != '\0'; i++)
        _putchar(error_msg[i]);

    exit(98);
}

/**
 * _isdigit - Checks if a string is composed only of digits
 * @str: String to check
 *
 * Return: 1 if all characters are digits, 0 otherwise
 */
int _isdigit(char *str)
{
    /* Iterate through the string */
    while (*str)
    {
        /* Check if the character is a digit */
        if (*str < '0' || *str > '9')
            return 0;
        str++;
    }
    return 1;
}

/**
 * multiply - Multiplies two numbers represented as strings
 * @num1: First number as a string
 * @num2: Second number as a string
 */
void multiply(char *num1, char *num2)
{
    int len1 = 0, len2 = 0;
    int *result;
    int carry, n1, n2, sum;
    int i, j, k;

    /* Find lengths of both strings */
    while (num1[len1])
        len1++;
    while (num2[len2])
        len2++;

    /* Allocate memory for the result */
    result = malloc(sizeof(int) * (len1 + len2));
    if (result == NULL)
        print_error();

    /* Initialize result to zero */
    for (i = 0; i < len1 + len2; i++)
        result[i] = 0;

    /* Go from right to left in num1 */
    for (i = len1 - 1; i >= 0; i--)
    {
        n1 = num1[i] - '0';
        carry = 0;
        k = len1 - 1 - i; /* Position to start adding the next result */

        /* Go from right to left in num2 */
        for (j = len2 - 1; j >= 0; j--)
        {
            n2 = num2[j] - '0';

            /* Multiply n1 and n2, add to current position */
            sum = n1 * n2 + result[k] + carry;

            /* Carry for next iteration */
            carry = sum / 10;

            /* Store result */
            result[k++] = sum % 10;
        }

        /* Store carry in next cell */
        if (carry > 0)
            result[k] += carry;
    }

    /* Find the first digit position of result */
    for (i = len1 + len2 - 1; i >= 0; i--)
    {
        if (result[i] > 0)
            break;
    }

    /* Print the result */
    for (; i >= 0; i--)
        _putchar(result[i] + '0');

    _putchar('\n');

    /* Free dynamically allocated memory */
    free(result);
}

/**
 * main - Entry point of the program
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
    /* Check number of arguments */
    if (argc != 3)
        print_error();

    /* Check if arguments are composed of digits */
    if (!_isdigit(argv[1]) || !_isdigit(argv[2]))
        print_error();

    /* Call multiplication function */
    multiply(argv[1], argv[2]);

    return (0);
}
