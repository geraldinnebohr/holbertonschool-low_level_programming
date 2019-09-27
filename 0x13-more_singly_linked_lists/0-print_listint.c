#include "lists.h"

/**
 * print_listint - function that prints all the elements of a list
 * @h: header node
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i;

	i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
