#include "lists.h"

/**
 * free_dlistint - free a list
 * @head: head of the list
 *
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
