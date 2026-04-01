#include "lists.h"

/**
 * add_dnodeint_end - add a node at the end of a list
 * @head: head of the list
 * @n: data
 *
 * Return: pointer to the new node
 */


dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *last = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

new->n = n;
new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		new->prev = NULL;
		return (new);
	}

	while (last->next != NULL)
		last = last->next;

last->next = new;
new->prev = last;

	return (new);
}
