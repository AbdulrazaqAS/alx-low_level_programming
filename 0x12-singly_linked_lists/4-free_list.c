#include "lists.h"

/**
 * free_list - frees a list
 * @head: list head
 */
void free_list(list_t *head)
{
	list_t *tmp;
	if (head == NULL)
		exit(99);
	while (head->next)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	free(head);
	free(tmp);
}
