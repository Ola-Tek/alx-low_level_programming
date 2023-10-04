#include "main.h"
#include <stdlib.h>
/**
 * free_grid - freestwo dimensional grid
 * @grid: input value
 * @height: input value
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free (grid);
	}
}
