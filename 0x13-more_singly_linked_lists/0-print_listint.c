#include "lists.h"

/**
 * print_listint - prints the elements of the list.
 * @h: head of the list.
 *
 * Return: nodos.
 */
size_t print_listint(const listint_t *h)
{
	size_t nodos = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodos++;
	}
	return (nodos);
}
