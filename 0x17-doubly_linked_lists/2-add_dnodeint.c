#include "lists.h"
/**
 * add_dnodeint - add node at the beggining
 *
 * @head: header of the linked list
 * @n: new node
 * Return: new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->next = *head;
	new_node->prev = NULL;
	new_node->n = n;
	if (*head == NULL)
		*head = new_node;
	else
	{
		(*head)->prev = new_node;
		*head = new_node;
	}
	return (new_node);
}
