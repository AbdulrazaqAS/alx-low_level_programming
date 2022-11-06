#include "lists.h"

/**
 * add_nodeint_end - adds a new node to the end
 * @head: head
 * @n: n value of new node
 *
 * Return: pointer to new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	(*new).next = NULL;

	while (*head)
	{
		*head = (*head)->next;
	}

	if (*head == NULL)
		*head = new;
	else
		(*head)->next = new;

	return (new);
