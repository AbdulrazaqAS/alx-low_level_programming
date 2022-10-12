#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a matrix
 * @grid: matrix
 * @height: height
 */
void free_grid(int **grid, int height)
{
	int index = 0;

	for (index = 0; index < height; index++)
	{
		free(*grid[index]);
	}
	free(**grid);
}
