#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: String to reverse.
 *
 * Description: Function that reverses the string @s.
 */
void rev_string(char *s)
{
    int len = 0;
    int start = 0;
    int end = 0;
    char temp;

    while (s[len] != '\0')
    {
        len++;
    }

    end = len - 1;

    while (start < end)
    {
        temp = s[start];
        s[start] = s[end];
        s[end] = temp;
        start++;
        end--;
    }
}
