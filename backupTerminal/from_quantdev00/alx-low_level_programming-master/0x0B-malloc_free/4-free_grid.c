#include "main.h"
/**
 * free_grid - freen up the grid
 * @grid: array of array
 * @height: array height
 *
 * Return: returning nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
