#include "lists.h"
#include <string.h>
/**
 * add_node_end - adds a node to the beginning
 * @head: pointer to list
 * @str: str value of the new node
 *
 * Return: new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode = malloc(sizeof(list_t));
	char *strtemp = NULL;
	unsigned int len = 0;

	if (newNode == NULL)
		return (NULL);
	if (str)
	{
		strtemp = strdup(str);
		while (*(str + len))
		{
			len++;
		}
	}

	while ((*head)->next)
		*head = (*head)->next;

	newNode->str = strtemp;
	(*newNode).len = len;
	newNode->next = NULL;
	*head = newNode;

	return (newNode);
}
