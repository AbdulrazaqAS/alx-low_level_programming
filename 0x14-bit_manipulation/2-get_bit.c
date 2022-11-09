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
	unsigned long int counter = 0, temp = n;

	if (index >= n)
		return (-1);
	n >>= index;
	if (n & 1)
		return (1);
	else
		return (0);
}
