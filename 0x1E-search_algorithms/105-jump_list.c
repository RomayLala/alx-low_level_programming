#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted singly linked list
 *             using the Jump search algorithm.
 * @list: A pointer to the head of the list to search in.
 * @size: The number of nodes in the list.
 * @value: The value to search for.
 *
 * Return: A pointer to the first node where value is located,
 *         or NULL if value is not present or list is NULL.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
    size_t step, prev_index;
    listint_t *prev, *curr;

    if (list == NULL || size == 0)
        return (NULL);

    step = sqrt(size);
    prev = list;
    curr = list;

    while (curr->index + step < size && curr->n < value)
    {
        prev = curr;
        for (prev_index = 0; prev_index < step && curr->next; prev_index++)
            curr = curr->next;
        printf("Value checked at index [%lu] = [%d]\n", curr->index, curr->n);
    }

    printf("Value found between indexes [%lu] and [%lu]\n", prev->index, curr->index);

    while (prev && prev->index <= curr->index)
    {
        printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
        if (prev->n == value)
            return (prev);
        prev = prev->next;
    }

    return (NULL);
}
