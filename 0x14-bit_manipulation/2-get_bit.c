#include "main.h"

/**
 * get_bit - gets a bit a an index
 * @n: total bits
 * @index: bit index
 *
 * Return: index of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/* If idex is >= 8 * 8 i.e. 32 bits */
	if (index >= sizeof(n) * 8)
		return (-1);
	n >>= index;
	if (n & 1)
		return (1);
	else
		return (0);
}
