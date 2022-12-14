#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/*
 * print_dlistint - prints the list
 * @h: head
 *
 * Return: num of nodes
 *
 * Description: prints a d liked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *tmp;
	size_t i;

	if (h == NULL)
		return (0);
	tmp = h->next;
	printf("%d\n", h->n);
	i = 1;
	while (tmp)
	{
		printf("%d\n", tmp->n);
		i++;
		tmp = tmp->next;
	}
	return (i);
}
