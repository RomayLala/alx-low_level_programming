#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * delete_dnodeint_at_index - Deletes the node at index index of a doubly linked list.
 * @head: Pointer to the pointer to the head of the list.
 * @index: The index of the node to be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *current;
    unsigned int i;

    /* Check for invalid input */
    if (head == NULL || *head == NULL)
        return (-1);

    current = *head;

    /* Handle deletion of the head node */
    if (index == 0)
    {
        *head = current->next;
        if (current->next != NULL)
            current->next->prev = NULL;
        free(current);
        return (1);
    }

    /* Traverse the list to find the node at index */
    for (i = 0; current != NULL && i < index; i++)
    {
        current = current->next;
    }

    /* If index is out of bounds */
    if (current == NULL)
        return (-1);

    /* Adjust the pointers to remove the node */
    if (current->prev != NULL)
        current->prev->next = current->next;
    if (current->next != NULL)
        current->next->prev = current->prev;

    free(current);
    return (1);
}
