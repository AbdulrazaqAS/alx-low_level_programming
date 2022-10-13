#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
 * array_range - creates an array
 * @min: min
 * @max: max
 *
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int *array, index, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	array = malloc(sizeof(int) * size);
	if (array == NULL)
		return (NULL);
	for (index = 0; index < size; index++)
		array[index] = min++;
	return (array);
}
