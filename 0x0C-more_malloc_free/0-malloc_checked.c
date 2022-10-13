#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
 * malloc_checked - allocates mem
 * @b: bytes
 */
void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);
	if (mem == NULL)
		exit(98);
	return (mem);
}
