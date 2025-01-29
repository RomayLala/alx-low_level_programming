#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted skip list
 * @list: Pointer to the head of the skip list
 * @value: Value to search for
 *
 * Return: Pointer to the first node where value is located, or NULL if not found
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
    skiplist_t *express, *prev;

    if (!list)
        return (NULL);

    express = list;
    while (express->express && express->express->n < value)
    {
        printf("Value checked at index [%lu] = [%d]\n", express->express->index, express->express->n);
        express = express->express;
    }

    prev = express;
    while (express->express)
        express = express->express;

    printf("Value found between indexes [%lu] and [%lu]\n", prev->index, express->index);
    express = prev;
    while (express && express->n < value)
    {
        printf("Value checked at index [%lu] = [%d]\n", express->index, express->n);
        express = express->next;
    }

    if (express && express->n == value)
    {
        printf("Value checked at index [%lu] = [%d]\n", express->index, express->n);
        return (express);
    }

    return (NULL);
}
