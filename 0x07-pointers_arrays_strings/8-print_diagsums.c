#include "stdlib.h"
#include "main.h"

/**
 * print_diagsums - prints sum of two diagonals of a square matrix
 * @a: pointer to matrix
 * @size: size
 */
void print_diagsums(int *a, int size)
{
	int b, c, diag1 = 0, diag2 = 0;

	for (b = 0; b < size; b++)
		for (c = 0; c < size; c++)
		{
			if (b == c)
				diag1 += a[b][c];
			if (b + c == size -1)
				diag2 += a[b][c];
		}
	printf("%d, %d\n", diag1, diag2);
}
