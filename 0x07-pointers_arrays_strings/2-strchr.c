#include "main.h"

/**
 * _strchr - locates a chat in str
 * @s: string
 * @c: char
 *
 * Return: pointer to first occur of c
 */
char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a]; a++)
	{
		if (s[a] == c)
			return (s[a]);
	}
	return (NULL);
}
