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
	char *strtemp = NULL;
	unsigned int len = 0;

	if (newNode == NULL)
		return (NULL);
	if(str)
	{
		strtemp = strdup(str);
		while (*(str + len))
		{
			len++;
		}
	}

	newNode->str = strtemp;
	(*newNode).len = len;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
