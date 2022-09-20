#include "main.h"

/**
 * _strcpy - string to cpy
 * @dest: destination
 * @src: source
 * Return: char *
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0, index = 0;

	while (*src++)
		len++;
	for (index = 0; index < len; index++)
		*(dest + index) = src[index];
	return (&dest);
}
