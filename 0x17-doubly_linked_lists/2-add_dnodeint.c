#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at the beginning of a list
 * @head: current head of the list
 * @n: data of the node
 * Return: Address of the new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	if (head == NULL)
		return (NULL);

	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
		return (NULL);

	if (*head == NULL)
	{
		newnode->n = n;
		newnode->prev = NULL;
		newnode->next = *head;
		*head = newnode;
		return (*head);
	}

	newnode->n = n;
	(*head)->prev = newnode;
	newnode->prev = NULL;
	newnode->next = *head;
	*head = newnode;

	return (*head);
}
