#include "main.h"

/**
 * _strcpy - string to cpy
 * @dest: destination
 * @src: source
 * Return: char *
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(*dest, *src);

	return (*src);
}
