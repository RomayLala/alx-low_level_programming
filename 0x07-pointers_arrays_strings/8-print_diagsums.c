#include "main.h"
#include <stdio.h>  /* Include for printf function declaration */

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix of integers.
 * @a: Pointer to the square matrix (2D array).
 * @size: Size of the square matrix.
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + i * size + i);       /* Sum of the first diagonal */
		sum2 += *(a + i * size + (size - 1 - i)); /* Sum of the second diagonal */
	}
	printf("%d, %d\n", sum1, sum2);
}
