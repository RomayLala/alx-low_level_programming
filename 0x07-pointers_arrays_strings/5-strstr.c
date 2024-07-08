#include "main.h"
#include <stddef.h> /* Include for NULL definition */

/**
 * _strstr - Locates a substring.
 * @haystack: The main string to be searched.
 * @needle: The substring to search for.
 *
 * Return: Pointer to the beginning of the located substring,
 *         or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *h;
	char *n;

	while (*haystack)
	{
		h = haystack;
		n = needle;

		while (*h && *n && *h == *n)
		{
			h++;
			n++;
		}

		if (!*n)
			return haystack;

		haystack++;
	}

	return NULL;
}
