#include "lists.h"
/**
 * add_nodeint - add one node to beginning
 * @head: firts node
 * @n: data
 * Return: head
 */


listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = *head;
	*head = temp;
	return (*head);
}
