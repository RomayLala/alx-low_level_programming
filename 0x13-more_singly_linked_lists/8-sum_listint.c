#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - calculates the sum of all the data (n) in a listint_t list
 * @head: pointer to the first node in the list
 *
 * Return: the sum of all the data (n), or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
