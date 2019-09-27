#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes a node at a position
 * @head: header of the list
 * @index: position of the new node
 * Return: 1 if succeed or -1 if not
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ant, *temp;
	unsigned int i;

	if (head == NULL)
		return (-1);

	i = 0;
	ant = *head;
	if (index == 0)
		free(ant);
		return (1);
	while (i < (index - 1))
	{
		ant = ant->next;
		i++;
		if (ant == NULL && i < (index - 1))
			return (-1);
	}
	if (ant->next == NULL)
		free(ant);
		return (1);
	temp = ant;
	ant->next = temp->next;
	ant->prev = temp->prev;
	free(ant);
	return (1);
}
