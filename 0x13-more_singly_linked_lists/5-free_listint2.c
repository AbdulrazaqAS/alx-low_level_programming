#include "lists.h"

/**
 * free_listint2 - frees a LL
 * @head: head
 */
void free_listint2(listint_t *head)
{
	if (head)
	{
		free_listint2(head->next);
		free(head);
		head = NULL;
	}
}
