#include "lists.h"

/**
 * free_listint - function that frees a list
 * @head: linked list data structure header
 */

void free_listint(listint_t *head)
{
	listint_t *x;

	x = head;
	while (head != NULL)
	{
		x = head;
		head = head->next;
		free(x);
	}
	free(head);
}
