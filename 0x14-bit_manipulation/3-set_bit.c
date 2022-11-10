#include "main.h"

/**
 * set_bit - sets a bit a an index
 * @n: pointer to total bits
 * @index: bit index
 *
 * Return: 1 if it worked, 0 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index);
{
	/* If idex is >= 8 * 8 i.e. 32 bits */
	if (index >= sizeof(*n) * 8)
		return (-1);
	n | (1<<index);
	return (1);
}
