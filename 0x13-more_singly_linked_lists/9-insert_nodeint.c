#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given index
 * @head: head
 * @idx: index
 * @n: n data of new node
 *
 * Return: ptr to new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int counter = 0;
	listint_t *new, *temp = *head;

	new = malloc(sizeof(listint_t));

	if (new == NULL || head == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	while (temp && temp->next)
	{
		if (counter == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		temp = temp->next;
		counter++;
	}

	return (NULL);
}
