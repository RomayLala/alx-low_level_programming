#include "main.h"

/**
 * reverse_string - reverses a string
 * @str: the string to be reversed
 * @length: length of the string
 */
void reverse_string(char *str, int length)
{
	int start = 0;
	int end = length - 1;
	char temp;

	while (start < end)
	{
		temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;
	}
}

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer to store the result
 * @size_r: buffer size
 * Return: pointer to the result, or 0 if it can't be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, len1, len2, sum, carry;

	for (len1 = 0; n1[len1]; len1++)
		;
	for (len2 = 0; n2[len2]; len2++)
		;
	if (len1 > size_r - 1 || len2 > size_r - 1)
		return (0);
	carry = 0;
	for (i = len1 - 1, j = len2 - 1, k = 0; i >= 0 || j >= 0 || carry; i--, j--, k++)
	{
		if (k >= size_r - 1)
			return (0);
		sum = carry;
		if (i >= 0)
			sum += n1[i] - '0';
		if (j >= 0)
			sum += n2[j] - '0';
		r[k] = (sum % 10) + '0';
		carry = sum / 10;
	}
	if (k >= size_r)
		return (0);
	r[k] = '\0';
	reverse_string(r, k);
	return (r);
}
