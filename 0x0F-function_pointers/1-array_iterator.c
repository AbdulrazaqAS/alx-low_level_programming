#include "function_pointers.h"

/**
 * array_iterator - array iterator
 * @array: array
 * @size: array size
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int index;

	if (array == NULL || action == NULL)
		exit(0);
	for (index = 0; index < size; index++)
		action(array[index]);
}
