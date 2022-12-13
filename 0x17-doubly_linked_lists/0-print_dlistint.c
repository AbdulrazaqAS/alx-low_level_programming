#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/* print_list - prints the list
 * @h: head
 *
 * Return: num of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint *tmp;
	size_t i;

	if (h == NULL)
		return (NULL);
	tmp = h;
	while (h)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
