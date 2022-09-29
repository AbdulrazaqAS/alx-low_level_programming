#include "stdlib.h"
#include "main.h"

/**
 * print_diagsums - prints sum of two diagonals of a square matrix
 * @a: pointer to matrix
 * @size: size
 */
void print_diagsums(int *a, int size)
{
	int b, c, diag_1 = 0, diag_2 = 0;

	for (b = 0; b < size; b++)
		for (c = 0; c < size; c++)
		{
			if (b == c)
				diag_1 += a[b][c];
			if (b + c == size -1)
				diag_2 += a[b][c];
		}
	printf("%d, %d\n", diag_1, diag_2);
}
