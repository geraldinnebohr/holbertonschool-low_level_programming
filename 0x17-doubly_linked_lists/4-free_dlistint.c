#include "lists.h"

/**
 * free_dlistint - function that frees a list
 * @head: head node of the list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux;

	while (head != NULL)
	{
		aux = head;
		head = head->next;
		free(aux);
	}
	free(head);
}
