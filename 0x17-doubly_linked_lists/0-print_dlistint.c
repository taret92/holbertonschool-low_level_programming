#include "lists.h"

/**
 * print_dlistint - print number of n
  * @h: header of the linked list
 * Return: nodes of the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
