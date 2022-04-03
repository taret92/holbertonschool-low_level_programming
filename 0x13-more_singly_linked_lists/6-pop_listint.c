#include "lists.h"
/**
 * pop_listint - delete node of a list
 * @head: head of the list
 * Return: i
 */

int pop_listint(listint_t **head)
{

	int i;
	listint_t *temp1;
	listint_t *temp2;

	if (*head == NULL)
		return (0);

	temp2 = *head;

	i = temp2->n;

	temp1 = temp2->next;

	free(temp2);

	*head = temp1;

	return (i);
}
