#include "main.h"

/**
 * _memset - fills memory with constant byte
 * @s: adress of memory
 * @b: constant byte
 * @n: first bytes to fill
 *
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;
	char **mem = &s;

	for (a = 0; a <= n; a++)
		**(mem + a) = b;
	return (mem);
}
