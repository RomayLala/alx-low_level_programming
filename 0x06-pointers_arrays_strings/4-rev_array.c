#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: The array to be reversed
 * @n: The number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int left = 0, right = n - 1, tmp;

	while (left < right)
	{
		/* Swap elements */
		tmp = a[left];
		a[left] = a[right];
		a[right] = tmp;

		/* Move indices towards the center */
		left++;
		right--;
	}
}
