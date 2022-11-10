#include "main.h"

/**
 * clear_bit - sets a bit a an index to 0
 * @n: pointer to num
 * @index: bit index
 *
 * Return: 1 if it worked, 0 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i, temp = 0;
	/* If idex is >= 8 * 8 i.e. 32 bits */
	if (index >= sizeof(*n) * 8)
		return (-1);

	temp = ~temp;
	temp <<= (index + 1);
	for (i = 0; i < index; i++)
	{
		temp |= (1 << i);
	}
	*n &= temp;
	return (1);
}
