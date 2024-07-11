#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 * @x: The base number.
 * @y: The exponent.
 *
 * Return: x raised to the power of y. If y is lower than 0, returns -1.
 */
int _pow_recursion(int x, int y)
{
    /* Base case: If y is negative, return -1 */
    if (y < 0)
        return -1;

    /* Base case: If y is 0, return 1 */
    if (y == 0)
        return 1;

    /* Recursive case: Multiply x by _pow_recursion(x, y - 1) */
    return x * _pow_recursion(x, y - 1);
}
