#include "main.h"

/**
 * puts2 - prints
 * @str: char to print
 */
void puts2(char *str)
{
	int len, index;

	while (*str++)
	{
		len++;
	}

	for (; len >= 0; len--)
	{
		_putchar(str[index]);
		index += 2;
	}
	_putchar('\n');
}
