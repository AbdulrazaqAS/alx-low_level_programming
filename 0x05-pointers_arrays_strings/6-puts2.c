#include "main.h"

/**
 * puts2 - prints
 * @str: char to print
 */
void puts2(char *str)
{
	while (*str)
	{
		_putchar(*str+=2);
	}
	_putchar('\n');
}
