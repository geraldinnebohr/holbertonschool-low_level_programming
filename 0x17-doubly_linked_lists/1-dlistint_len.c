#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements in a list
 * @h: list
 * Return: Number of elements in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t n;

	n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
