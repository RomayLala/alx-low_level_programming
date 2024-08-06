#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to the first node in the list
 * @index: index of the node to retrieve
 *
 * Return: pointer to the node at the specified index, or NULL if the node
 * does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; head != NULL; i++)
	{
		if (i == index)
			return (head);
		head = head->next;
	}

	return (NULL);
}
