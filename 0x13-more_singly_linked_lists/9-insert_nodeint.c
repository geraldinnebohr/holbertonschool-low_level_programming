#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning of a list
 * @head: double pointer
 * @n: is an integer
 * Return: Address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (*head);

}

/**
 * insert_nodeint_at_index - function that insert a new node
 * @head: header
 * @idx: index of the list where new node should be added.
 * @n: new data in new node
 * Return: address of the new element
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *ant, *temp;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(*head));
	if (new == NULL)
		return (NULL);
	new->n = n;
	i = 0;
	if (!*head)
	{
		new->next = NULL;
		*head = new;
		return (new);
	}
	ant = *head;
	if (idx == 0)
		return (add_nodeint(head, n));
	while (i < (idx - 1))
	{
		ant = ant->next;
		i++;
		if (ant == NULL && i < (idx - 1))
			return (NULL);
	}
	if (ant->next == NULL)
		return (add_nodeint_end(&ant, n));
	temp = ant;
	new->next = temp->next;
	new->n = n;
	new->next = new;
	return (new);
}
