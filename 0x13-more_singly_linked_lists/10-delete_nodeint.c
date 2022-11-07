#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at an index
 * @head: head
 * @index: index
 *
 * Return: 1 if succeeded, -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *temp2;
	int counter;

	if (!(*head))
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		temp->next = NULL;
		free(temp);
	}

	temp = *head;
	for (counter = 0; counter < (index - 1); counter++)
	{
		if (temp == NULL)
			return (-1);
		temp = temp->next;
	}
	temp2 = temp->next;
	temp->next = temp->next->next;
	temp2->next = NULL;
	free(temp2);

	return (1);
}
