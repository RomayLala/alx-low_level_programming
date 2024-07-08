#include "main.h"
#include <stddef.h> /* Include for NULL definition */

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to be searched.
 * @accept: The set of bytes to search for.
 *
 * Return: Pointer to the byte in s that matches one of the bytes in accept,
 *         or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	char *a;

	while (*s)
	{
		a = accept;
		while (*a)
		{
			if (*s == *a)
				return s;
			a++;
		}
		s++;
	}

	return NULL; /* Ensure NULL is properly returned if no match is found */
}
