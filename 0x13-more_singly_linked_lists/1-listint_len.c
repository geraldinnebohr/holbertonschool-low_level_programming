#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked list
 * @h: header node
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t i;

	i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
