#include "main.h"
/**
 * free_grid - free two dimensional array
 * @grid: the two dimensional array
 * @height: column of 2 dimensional array
 * Return: the pointer to the 2 dimensional array
 */
void free_grid(int **grid, int height)
{
	int i;

	i = 0;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
