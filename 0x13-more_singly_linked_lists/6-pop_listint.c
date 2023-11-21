#include "lists.h"

/**
 * pop_listint - deletes the head of a LL
 * @head: head
 *
 * Return: n data of deleted node
 */
int pop_listint(listint_t **head)
{
	int temp;
	listint_t *temp2;

	if (*head)
	{
		temp = (*head)->n;
		temp2 = *head;
		*head = (*head)->next;
		temp2->next = NULL;
		free(temp2);
		return (temp);
	}
	return (0);
}

