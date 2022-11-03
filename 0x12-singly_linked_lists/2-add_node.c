#include "lists.h"
#include <string.h>
/**
 * add_node - adds a node to the beginning
 * @head: pointer to list
 * @str: str value of the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);
	newNode->next = head->next->next;
	head->next->next = newNode;

	return (newNode);
}
