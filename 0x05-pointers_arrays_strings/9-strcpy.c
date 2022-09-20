#include "main.h"

/**
 * _strcpy - string to cpy
 * @dest: destination
 * @src: source
 * Return: char *
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	return (dest);
}
