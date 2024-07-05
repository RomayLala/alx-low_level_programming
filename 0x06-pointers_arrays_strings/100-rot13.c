#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 * @s: The string to encode.
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *s)
{
    int i, j;
    char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    char out[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

    for (i = 0; s[i] != '\0'; i++)
    {
        for (j = 0; in[j] != '\0'; j++)
        {
            if (s[i] == in[j])
            {
                s[i] = out[j];
                break;
            }
        }
    }
    return (s);
}
