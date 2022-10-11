#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
 * alloc_grid - matrix
 * @width: width
 * @height: h
 *
 * Return: pointer to matrix
 */
int **alloc_grid(int width, int height)
{
	int hig, wid;
	int **matrix;

	if (width < 1 || height < 1)
		return (NULL);
	matrix = malloc(sizeof(int *) * height);
	if (matrix == NULL)
		return (NULL);
	for (hig = 0; hig < height; hig++)
	{
		matrix[hig] = malloc(sizeof(int) * wid);
		if(matrix[hig] == NULL){
			free(matrix);
			return (NULL);
		}
		for (wid = 0; wid < width; wid++)
			matrix[hig][wid] = 0;
	}
	return (matrix);
}
