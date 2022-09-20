#include "main.h"

/**
 * print_array - prints n elements of an array
 * @a: the array
 * @n: num of element to print
 */
void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		if (index == n - 1) 
			printf("%d\n");
		else
			printf("%d, ", a[index]);
	}
}
