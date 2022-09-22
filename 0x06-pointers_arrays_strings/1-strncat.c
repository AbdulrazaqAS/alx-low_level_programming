#include "main.h"

/**
 * _strncat - concats 2 strings
 * @dest: destination
 * @src: source
 * @n: num of bytes to be appended from src to dst
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, destLen = 0;

	while (*dest++)
		destLen++;

	for (index = 0; src[index] && index < n; index++)
		dest[destLen++] = src[index];

	return (dest)
}
