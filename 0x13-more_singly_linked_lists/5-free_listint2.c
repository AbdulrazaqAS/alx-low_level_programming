#include "lists.h"

/**
 * free_listint2 - frees a LL
 * @head: head
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head)
	{
		while (*head)
		{
			temp = (*head)->next;
			free(*head);
			*head = temp;
		}
		head = NULL;
	}
}
