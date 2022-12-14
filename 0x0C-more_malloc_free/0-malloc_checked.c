#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
 * malloc_checked - allocates mem
 * @b: bytes
 *
 * Return: pointer to mem block
 */
void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);
	if (mem == NULL)
		exit(98);
	return (mem);
}
