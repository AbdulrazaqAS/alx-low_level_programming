#include "lists.h"

/**
 * list_len - List of elements in a linked list
 * @h: the list
 *
 * Return: num of elements
 */
size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h)
	{
		h = h->next;
		num++;
	}

	return (num);
}
