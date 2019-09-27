#include "lists.h"

/**
 * sum_listint - function that returns the nth node of a list
 * @head: header node
 * Return: node in the nth position
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
