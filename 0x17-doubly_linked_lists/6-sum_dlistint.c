#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the data in the list
 * @head: header node of the list
 * Return: sum of the data
 */

int sum_dlistint(dlistint_t *head)
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
