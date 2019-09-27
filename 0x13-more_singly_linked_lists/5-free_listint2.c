#include "lists.h"

/**
 * free_listint2 - function that frees a list
 * @head: linked list data structure header
 */

void free_listint2(listint_t **head)
{
	listint_t *x, *y;

	if (head == NULL)
		return;

	x = *head;

	while (x != NULL)
	{
		y = x;
		x = x->next;
		free(y);
	}
	*head = NULL;
}
