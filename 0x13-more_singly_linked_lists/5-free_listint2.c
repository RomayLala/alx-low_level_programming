#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Frees a listint_t list and sets the head to NULL.
 * @head: Double pointer to the head of the list.
 *
 * Description: The function iterates through the list, freeing each node.
 * After freeing all nodes, it sets the head to NULL.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
