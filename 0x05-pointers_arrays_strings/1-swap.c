#include "main.h"

/**
 * swap_int - swaps 2 ints
 * @a: int1
 * @b: int2
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
