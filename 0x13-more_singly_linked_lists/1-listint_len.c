#include "lists.h"

/**
 * listint_len - Return the number of elements in a linked
 * list
 * @h: head of list
 * Return: nodos
 */

size_t listint_len(const listint_t *h)
{
size_t nodos = 0;

	while (h != NULL)
	{
		h = h->next;
		nodos++;
	}
	return (nodos);
}
