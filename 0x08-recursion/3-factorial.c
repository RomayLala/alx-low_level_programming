#include "main.h"

/**
 * factorial - computes the factorial of a number
 * @n: the number to compute factorial of
 *
 * Return: factorial of n, or -1 if n is negative (error)
 */
int factorial(int n)
{
    if (n < 0)  /* if n is negative, return -1 (error) */
        return -1;
    else if (n == 0)  /* base case: factorial of 0 is 1 */
        return 1;
    else  /* compute factorial using recursion */
        return n * factorial(n - 1);
}
