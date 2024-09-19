#include "lists.h"

/**
 * print_dlistint - prints all the elements of a doubly linked list
 * @h: pointer to the head of the doubly linked list
 *
 * Return: the number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
    size_t count = 0;

    while (h != NULL)
    {
        printf("%d\n", h->n); /* Print the data (integer) stored in the node */
        count++; /* Increment node count */
        h = h->next; /* Move to the next node */
    }

    return (count); /* Return the total number of nodes */
}
