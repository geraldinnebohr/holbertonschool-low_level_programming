#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end of a list
 * @head: double pointer
 * @n: is an integer
 * Return: Address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *last;

	last = *head;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = new;
	return (new);
}
