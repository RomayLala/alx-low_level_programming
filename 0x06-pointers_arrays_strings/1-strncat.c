#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to be used from src
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
    int dest_len = 0;
    int i;

    /* Find the length of dest */
    while (dest[dest_len] != '\0')
    {
        dest_len++;
    }

    /* Append src to dest, using at most n bytes from src */
    for (i = 0; i < n && src[i] != '\0'; i++)
    {
        dest[dest_len + i] = src[i];
    }

    /* Null-terminate the resulting string */
    dest[dest_len + i] = '\0';

    return (dest);
}
