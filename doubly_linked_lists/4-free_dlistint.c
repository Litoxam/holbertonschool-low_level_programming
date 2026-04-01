#include "lists.h"

/**
 * add_dnodeint_end - add a node at the end of a list
 * @head: head of the list
 * @n: data
 *
 * Return: pointer to the new node
 */


void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
