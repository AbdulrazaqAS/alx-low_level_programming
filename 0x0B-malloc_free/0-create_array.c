#include "main.h"
#include <stdlib>

/**
 * create_array - creates an array of chars and initiaalize it with a specific char.
 * @size: size
 * @c: char for init
 *
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	int index;

	if (size == 0)
		return (0);

	array =  malloc(sizeof(char) * size);

	if (array == null)
		return (NULL);
	for (index = 0; index < size; index++)
	{
		array[index] = c;
	}

	free(array);

	return (array);
}
