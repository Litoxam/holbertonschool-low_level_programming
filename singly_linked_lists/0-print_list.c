#include <stdio.h>
#include "lists.h"


/**
 * print_list - display all elements of a list
 * @h: points to the head
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)/*on vérifie si la string != NULL*/
		{
			printf("[0] (nil)\n");
		}
		else
		{ /*sinon, on imprime la string et sa longueur len*/
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next; /*on passe au noeud suivant*/
		count++; /*on augmente le compteur*/
	}
	return (count); /*on retourne le compteur de neouds*/
}
