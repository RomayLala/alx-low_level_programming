#include "main.h"
#include <stdlib.h>

/**
 * _strlen - calculates the length of a string.
 * @str: the string to calculate the length of.
 *
 * Return: length of the string.
 */
int _strlen(char *str)
{
    int len = 0;

    while (str[len])
        len++;
    return (len);
}

/**
 * _strcpy - copies a string to a buffer.
 * @dest: the buffer to copy the string to.
 * @src: the string to copy.
 *
 * Return: pointer to the destination buffer.
 */
char *_strcpy(char *dest, char *src)
{
    int i;

    for (i = 0; src[i]; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return (dest);
}

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter.
 * @str: the string to duplicate.
 *
 * Return: pointer to the duplicated string, or NULL if insufficient memory
 *         was available or if str is NULL.
 */
char *_strdup(char *str)
{
    char *dup;
    int len;

    if (str == NULL)
        return (NULL);

    len = _strlen(str);
    dup = malloc((len + 1) * sizeof(char));
    if (dup == NULL)
        return (NULL);

    return (_strcpy(dup, str));
}
