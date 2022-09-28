#include "main.h"

/**
 * _memcpy - copies n bytes
 * @dest: destination
 * @src: source
 * @n: bytes num
 *
 * Return: pointer to dest
 */
char *memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a <= n; a++)
		dest[a] = *(src + a);
	return (dest);
}
