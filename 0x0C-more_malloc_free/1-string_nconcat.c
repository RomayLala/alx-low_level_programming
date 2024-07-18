#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes of s2 to concatenate.
 *
 * Return: Pointer to allocated memory with concatenated result,
 *         NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *concat;
    unsigned int len1 = 0, len2 = 0, concat_size, i, j;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    while (s1[len1])
        len1++;
    while (s2[len2])
        len2++;

    if (n >= len2)
        n = len2;

    concat_size = len1 + n + 1;
    concat = malloc(sizeof(char) * concat_size);
    if (concat == NULL)
        return (NULL);

    for (i = 0; i < len1; i++)
        concat[i] = s1[i];
    for (j = 0; j < n; j++)
        concat[i + j] = s2[j];
    concat[i + j] = '\0';

    return (concat);
}
