#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a new node at end
 * @head: ptr to ptr to head of LL
 * @str: str data of new node
 *
 * Return: ptr to new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = 0;
	char *dup = NULL;
	list_t *new, *tmp;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	if (str)
	{
		dup = strdup(str);
		while (*(str + len))
			len++;
	}

	new->str = dup;
	(*new).len = len;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		tmp = *head;

		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
	}

	return (new);
}
