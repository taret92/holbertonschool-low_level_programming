#include "lists.h"




listint_t *add_nodeint_end(listint_t **head, const int n)

{
listint_t *nodo;

	nodo = malloc(sizeof(listint_t));

	if (nodo == NULL)
	return (NULL);

	nodo->n = n;

	while (head != NULL)

	nodo->next = *head;

	*head = nodo;

	return (*head);
}
