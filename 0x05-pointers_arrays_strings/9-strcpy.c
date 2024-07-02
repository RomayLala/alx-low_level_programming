#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src to the buffer pointed to by dest.
 * @dest: Pointer to the destination buffer
 * @src: Pointer to the source string
 *
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while ((*dest++ = *src++))
		;

	return start;
}
