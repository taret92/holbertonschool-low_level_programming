#include "lists.h"

/**
 * free_listint2 - free list
 * @head: head of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	while ((temp = *head) != NULL)
	{
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
