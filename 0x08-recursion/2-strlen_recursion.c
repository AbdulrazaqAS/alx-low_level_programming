#include "main.h"

/**
 * _strlen_recursion - calc length of a str
 * @s: str
 *
 * Return: length
 */
int _strlen_recursion(char *s)
{
	if (!s[0])
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
