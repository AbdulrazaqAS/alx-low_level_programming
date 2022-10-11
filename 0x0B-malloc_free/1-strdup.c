#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
 * _strdup - duplicates a string
 * @str: str
 *
 * Return: pointer to new str
 */
char *_strdup(char *str)
{
	int len = 0, index;
	char *new;

	if (str == NULL)
		return (NULL);
	while (str[len])
		len++;
	new = malloc(sizeof(*new) * len);
	if (new == NULL)
		return (NULL);
	for (index = 0; index < len; index++)
	{
		new[index] = *(str + index);
	}
	return (new);
}
