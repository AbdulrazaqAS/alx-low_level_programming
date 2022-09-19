#include "main.h"

/**
 * _strlen - prints lenght of a str
 * @s: string
 * Return: lenght
 */
int _strlen(char *s)
{
	int len, index;

	index = 0;
	len = 0;

	while (*s[index] != '\0')
	{
		index++;
	}
	return (index + 1);
}
