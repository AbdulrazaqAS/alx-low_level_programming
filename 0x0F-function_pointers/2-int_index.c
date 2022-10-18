#include "function_pointers.h"

/**
 * int_index - find index of a num in an array
 * @array: array
 * @size: size
 * @cmp: compare function
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (index = 0; index < size; index++)
		if (cmp(array[index]) > 0)
			return (index);
	return (-1);
}
