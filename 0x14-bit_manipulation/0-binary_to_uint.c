#include "main.h"

/**
 * binary_to_uint - binary to unsigned int
 * @b: string of 1 & 0
 *
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		result <<= 1;
		if (*b & 1)
			result++;
		b++;
	}
	return (result);
}
