#include "main.h"
/**
 * free_array - free the 2 dimensional array
 * @array:  2 dimension array
 * Return: Empty of null
 */
void free_array(int **array)
{
	int i;

	i = 0;
	while (array[i])
	{
		free(array[i]);
		i++;
	}
	free(array);
}

/**
 * alloc_grid - allocate two dimensions array and fill it with 0
 * @width: row of 2 dim array
 * @height: column of 2 dim array
 * Return: the pointer to the 2 dim array
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	array = malloc(height * sizeof(int *));
	if (!array)
		return (NULL);
	i = 0;
	j = 0;
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));
		if (!array[i])
		{
			free_array(array);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);
}
