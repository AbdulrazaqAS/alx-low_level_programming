#include "lists.h"

/**
 * print_listint - prints all elements of LL
 * @h: head
 */
size_t print_listint(const listint_t *h)
{
	size_t len = 0;
	listint_t **tmp;

	tmp = &h;
	while (*tmp)
	{
		printf("%d", (*tmp)->n);
		tmp = tmp->next;
		len++;
	}

	return (len);
}
