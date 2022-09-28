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
	for (unsigned int a = 0; a <= n; a++)
		*(s + a) = b;
	return (s);
}
