#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: string
 */
void _puts_recursion(char *s)
{
	if (!*s)
		_putchar('\n');
	_putchar(s[0]);
	_puts_recursion(s + 1);
}
