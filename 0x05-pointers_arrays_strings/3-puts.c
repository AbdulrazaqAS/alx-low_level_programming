#include "main.h"

/**
 * _puts - prints
 * @str: char to print
 */
void _puts(char *str)
{
	while (*str++)
	{
		_putchar(*str--);
		*str++;
	}
	_putchar('\n');
}
