#include "main.h"

/**
 * puts_half - prints
 * @str: char to print
 */
void puts_half(char *str)
{
	int len = 0, index = 0, n;

	while (*str++)
	{
		len++;
	}
	if (len % 2 != 0)
		n = (len - 1) / 2;
	else
		n = len / 2;

	for (index = n; index < len; index++)
		_putchar(str[index]);

	_putchar('\n');
}
