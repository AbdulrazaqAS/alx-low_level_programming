#include "main.h"

/**
 * puts2 - prints
 * @str: char to print
 */
void puts2(char *str)
{
	int len = 0, index = 0;

	while (*str++)
	{
		len++;
	}

	for (index = 0; index < len; len += 2)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
