#include "main.h"

/**
 * print_rev - reverse
 * @s: str to reverse
 */
void print_rev(char *s)
{
	int len = _strlen(s);

	for (; len >= 0; len--)
	{
		_putchar(*(s + len));
	}
	_putchar('\n');
}
