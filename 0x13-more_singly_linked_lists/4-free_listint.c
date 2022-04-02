#include "lists.h"

/**
 * free_listint - free list
 * @head: head of the list
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
