#include "main.h"
#include <stdlib.h>

static int count_words(char *str)
{
    int in_word = 0, count = 0;

    while (*str)
    {
        if (*str == ' ')
            in_word = 0;
        else if (in_word == 0)
        {
            in_word = 1;
            count++;
        }
        str++;
    }
    return (count);
}

static char **allocate_words(int words)
{
    char **array;

    array = malloc(sizeof(char *) * (words + 1));
    if (array == NULL)
        return (NULL);
    return (array);
}

char **strtow(char *str)
{
    char **words_array;
    int i = 0, j = 0, k = 0, words;
    int x; /* Declare x outside the loop */

    if (str == NULL || *str == '\0')
        return (NULL);
    words = count_words(str);
    words_array = allocate_words(words);
    if (words_array == NULL)
        return (NULL);
    while (str[i])
    {
        if (str[i] != ' ')
        {
            j = i;
            while (str[j] && str[j] != ' ')
                j++;
            words_array[k] = malloc(j - i + 1);
            if (words_array[k] == NULL)
            {
                while (k >= 0)
                    free(words_array[k--]);
                free(words_array);
                return (NULL);
            }
            for (x = 0; x < j - i; x++)
                words_array[k][x] = str[i + x];
            words_array[k][j - i] = '\0';
            k++;
            i = j;
        }
        else
            i++;
    }
    words_array[k] = NULL;
    return (words_array);
}
