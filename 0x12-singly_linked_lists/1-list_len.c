#include "lists.h"
/**
 * list_len count number of elements
 * @h: singly linked list
 * @return number elements
 */

size_t list_len(const list_t *h)
{
size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
