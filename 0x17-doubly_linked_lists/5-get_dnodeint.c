#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a doubly linked list
 * @head: Pointer to the head of the list
 * @index: Index of the node, starting from 0
 *
 * Return: The nth node of the list, or NULL if it doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    unsigned int i = 0;
    dlistint_t *current = head;

    /* Traverse the list until the desired index is reached */
    while (current != NULL && i < index)
    {
        current = current->next;
        i++;
    }

    /* If index is out of range, return NULL */
    if (current == NULL)
        return (NULL);

    return (current);
}
