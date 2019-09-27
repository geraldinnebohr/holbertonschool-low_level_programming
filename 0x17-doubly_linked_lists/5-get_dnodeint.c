#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of a list
 * @head: header node
 * @index: index of the node
 * Return: node in the nth position
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *x;
	unsigned int cont;

	cont = 0;
	x = head;

	if (head == NULL)
		return (NULL);

	while (index != cont)
	{
		if (x == NULL)
			return (NULL);
		x = x->next;
		cont++;
	}
	return (x);
}
