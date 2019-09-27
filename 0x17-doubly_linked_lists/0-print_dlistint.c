#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a dlistint_t list
 * @h: list
 * Return: Number of nodes in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t n;

	n = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		n++;
		h = h->next;
	}
	return (n);
}
