#include <lists.h>

size_t print_list(const list_t *h)
{
	size_t n;

	n = 0;
	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%d] ", h->len);
			printf("%s", h->str);
			printf("\n");
		}
		else
			printf("[0] (nil)\n");
		h = h->next;
		n++;
	}
	return (n);
}
