#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal
 * @n: Number of times the character '\' should be printed
 *
 * Description:
 *   If n is 0 or less, the function prints only a newline.
 *   Each '\' character should be printed with proper indentation.
 */
void print_diagonal(int n)
{
	int i, space;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		for (space = 0; space < i; space++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
