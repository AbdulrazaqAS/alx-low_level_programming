#include "main.h"

/**
 * flip_bits - number of bits needed to flip to get from
 * one number to another
 * @n: num1
 * @m: num2
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num = 0;

	n ^= m;

	while (n)
	{
		if (n & 1)
			num++;
		n >> 1;
	}

	return (num);
}
