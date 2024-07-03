#include "main.h"

/**
 * rot13 - Encodes a string using rot13
 * @str: String to be encoded
 *
 * Return: Pointer to the encoded string
 */
char *rot13(char *str)
{
	char *ptr = str;

	while (*str)
	{
		if ((*str >= 'a' && *str <= 'm') || (*str >= 'A' && *str <= 'M'))
			*str += 13;
		else if ((*str >= 'n' && *str <= 'z') || (*str >= 'N' && *str <= 'Z'))
			*str -= 13;
		str++;
	}

	return (ptr);
}
