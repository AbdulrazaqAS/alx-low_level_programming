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

	if (h == NULL)
		return (0);
	while (h->next){
		if (h->str)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[%d] (nil)\n", h->len);

		nodes++;
		h = h->next;
	}

	if (h->str)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[%d] (nil)\n", h->len);
	nodes++;
	return (nodes);
}
