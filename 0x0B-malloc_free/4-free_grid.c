#include "main.h"
/**
 * free_grid - function free 2D array
 * @grid: the 2D array
 * @height: column of 2D array
 * Return: the pointer to the 2 dimensional array
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
