#include "main.h"
/**
 * free_grid - function to free 2D array
 * @grid: the 2D array
 * @height: column of 2D array
 * Return: the pointer to the 2D array
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
