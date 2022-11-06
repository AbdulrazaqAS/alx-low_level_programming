#include "lists.h"

/**
 * sum_listint - sums n values of all nodes
 * @head: head
 *
 * Return: total
 */
int sum_listint(listint_t *head)
{
	int total = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		total+= head->n;
		head = head->next;
	}

	return (total);
}
