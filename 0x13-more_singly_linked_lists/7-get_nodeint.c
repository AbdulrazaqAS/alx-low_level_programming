#include "lists.h"

/**
 * get_nodeint_at_index - get node at index
 * @head: head
 * @index: index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int counter = 0;

	if (head == NULL)
		return (head);
	while (head)
	{
		if (index == counter)
			return (head);
		head = head->next;
		counter++;
	}

	return (NULL);
}
