#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Pointer to the head of the list.
 * @idx: The index where the new node should be added.
 * @n: The integer value for the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *new_node, *temp = *h;
    unsigned int i;

    if (idx == 0)
        return (add_dnodeint(h, n));

    for (i = 0; temp && i < idx - 1; i++)
        temp = temp->next;

    if (!temp || (idx != 0 && !temp->next))
        return (NULL);

    new_node = malloc(sizeof(dlistint_t));
    if (!new_node)
        return (NULL);

    new_node->n = n;
    new_node->next = temp->next;
    new_node->prev = temp;

    if (temp->next)
        temp->next->prev = new_node;
    
    temp->next = new_node;

    return (new_node);
}
