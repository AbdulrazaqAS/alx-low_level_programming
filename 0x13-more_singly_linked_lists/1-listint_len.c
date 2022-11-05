#include "lists.h"

/**
 * listint_len - prints all elements of LL
 * @h: head
 *
 * Return: num of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
	}

	return (len);
}
