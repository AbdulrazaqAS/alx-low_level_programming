#include "main.h"

/**
 * print_rev - reverse
 * @s: str to reverse
 */
void print_rev(char *s)
{
	int len = 0;
	int index = 0;

	while (s[index++])
		len++;

	for (len--; len >= 0; len--)
	{
		_putchar(*(s + len));
	}
	_putchar('\n');
}
