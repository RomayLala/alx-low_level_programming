#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes the node at a given index.
 * @head: Double pointer to the head of the list.
 * @index: The index of the node to delete.
 * Return: 1 if succeeded, -1 if failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    listint_t *temp = *head;
    listint_t *prev = NULL;
    unsigned int i = 0;

    /* Check if the list is empty */
    if (*head == NULL)
        return (-1);

    /* Handle deletion of the head node */
    if (index == 0)
    {
        *head = temp->next;
        free(temp);
        return (1);
    }

    /* Traverse the list to find the node to delete */
    while (temp != NULL && i < index)
    {
        prev = temp;
        temp = temp->next;
        i++;
    }

    /* Check if index is out of bounds */
    if (temp == NULL)
        return (-1);

    /* Delete the node */
    prev->next = temp->next;
    free(temp);

    return (1);
}
