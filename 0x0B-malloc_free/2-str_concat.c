#include "main.h"
#include <stdlib.h>

/**
 * _strlen - Calculates the length of a string.
 * @s: The string.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
    int len = 0;

    while (s[len])
        len++;
    return (len);
}

/**
 * str_concat - Concatenates two strings.
 * @s1: First string.
 * @s2: Second string.
 *
 * Return: Pointer to newly allocated space in memory containing concatenated
 *         string, or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
    char *concat;
    int len1, len2, i, j;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    len1 = _strlen(s1);
    len2 = _strlen(s2);

    concat = malloc(sizeof(char) * (len1 + len2 + 1));
    if (concat == NULL)
        return (NULL);

    for (i = 0; i < len1; i++)
        concat[i] = s1[i];
    for (j = 0; j < len2; j++)
        concat[i + j] = s2[j];
    concat[i + j] = '\0';

    return (concat);
}
