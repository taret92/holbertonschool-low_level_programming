#include "lists.h"
/**
 * dlistint_len - size of a list
 *
 * @h: header of the linked list
 * Return: size of the linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int list = 0;

	while (h)
	{
		h = h->next;
		list++;
	}

	return (list);
}
