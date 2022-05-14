#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes a node given index
 *
 * @head: head of the list
 * @index: given index
 * Return: 1 if it succeeded 0 if it fails
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *erase;
	unsigned int i = 0;

	if (*head == NULL || head == NULL)
		return (-1);

	erase = *head;

	while (i < index)
	{
		if (erase == NULL)
			return (-1);
		erase = erase->next;
		i++;
	}
	if (erase == *head)
		*head = erase->next;

	if (erase->next != NULL)
		erase->next->prev = erase->prev;

	if (erase->prev != NULL)
		erase->prev->next = erase->next;

	free(erase);

	return (1);
}
