#include "main.h"

/**
 * print_number - Prints an integer
 * @n: The integer to print
 *
 * Description: This function prints an integer using only the _putchar function.
 * It handles negative numbers and does not use arrays, pointers, or long.
 */
void print_number(int n)
{
	int sign = 1;

	if (n < 0)
	{
		_putchar('-');
		sign = -1;
	}
	
	if (n / 10 != 0)
		print_number((n / 10) * sign);

	_putchar((n % 10) * sign + '0');
}
