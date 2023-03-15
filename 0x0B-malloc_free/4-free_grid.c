#include <stdlib.h>

/**
 * free_grid - Free a 2 dimensional grid
 *
 * @grid: The grid we'll free up
 * @height: The number of rows in the grid
 *
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int x = 0;

	while (x < height)
	{
		free(grid[x]);
		x++;
	}
	free(grid);
}
