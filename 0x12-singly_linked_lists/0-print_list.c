#include "lists.h"

/**
 * print_list - prints all elements of a list
 * @h: str
 *
 * Return: number of next nodes from this node (to last node)
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;
	list_t *temp;

	while (h->next){
		if (h->str)
			printf("[%lu] (%s)\n", h->len, h->str);
		else
			printf("[%lu] (nil)\n", h->len);

		nodes++;
		h = h->next;
	}
	return (nodes);
}
