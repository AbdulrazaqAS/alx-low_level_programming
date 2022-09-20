#include "main.h"

/**
 * puts_half - prints
 * @str: char to print
 */
void puts_half(char *str)
{
	int len, index;

	while (*str++)
	{
		len++;
	}
	
	if (len % 2 != 0)
		index = (len - 1) / 2;
	else
		index = len / 2;

	for (; index < len; index++)
		_putchar(str[index]);

	_putchar('\n');
}
