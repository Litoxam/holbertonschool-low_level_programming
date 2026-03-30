#include <stdlib.h>
#include "lists.h" /* Make sure to include your specific header file */

/**
 * free_list - Frees a list_t list
 * @head: A pointer to the head of the list_t list
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL) /*parcours la liste jusqu'à la fin*/
	{

		temp = head->next; /*on garde l'adresse du prochain noeud*/


		if (head->str != NULL) /*on free la string du noeud*/
		{
			free(head->str);
		}


		free(head); /*on free le noeud*/


		head = temp; /*on avance vers le noeud suivant*/
	}
}
