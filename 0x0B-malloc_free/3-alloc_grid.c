#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer
 * @width: width
 * @height: height
 *
 * Return: NULL on faliure
*/

int **alloc_grid(int width, int height)
{
	int **grid, b, c;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (b = 0; b < height; b++)
	{
		grid[b] = malloc(width * sizeof(int));
		if (grid[b] == NULL)
		{
			while (b >= 0)
			{
				free(grid[b]);
				b--;
			}
			free(grid);
			return (NULL);
		}
		for (c = 0; c < width; c++)
			grid[b][c] = 0;
	}
	return (grid);
}
