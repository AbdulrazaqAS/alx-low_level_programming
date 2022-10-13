#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
 * _calloc - like calloc
 * @nmemb: elements in array
 * @size: size for each element
 *
 * Return: void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	mem = malloc(nmemb * size);
	if (mem == NULL)
		return (NULL);
	return (mem);
}
