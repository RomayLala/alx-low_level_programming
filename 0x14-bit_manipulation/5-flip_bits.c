#include "main.h"

/**
 * flip_bits - Returns the number of bits needed to flip to get from one number to another.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result;
	unsigned int count;

	xor_result = n ^ m; /* XOR to find differing bits */
	count = 0;

	/* Count the number of set bits */
	while (xor_result)
	{
		count += xor_result & 1; /* Add least significant bit */
		xor_result >>= 1; /* Shift right */
	}

	return (count);
}
