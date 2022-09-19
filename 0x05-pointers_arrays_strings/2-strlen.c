#include "main.h"

/**
 * _strlen - prints lenght of a str
 * @s: string
 * Return: lenght
 */
int _strlen(char *s)
{
	int index;

	index = 0;

	while (*s++)
	{
		index++;
	}
	return (index);
}
