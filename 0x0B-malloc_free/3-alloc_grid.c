#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2-dimensional array of
 *               integers.
 * @width: The width of the 2-dimensional array.
 * @height: The height of the 2-dimensional array.
 *
 * Return: If width <= 0, height <= 0, or the function fails - NULL.
 *         Otherwise - a pointer to the 2-dimensional array of integers.
 */

int **alloc_grid(int width, int height)
{
	int **mem_all;
	int w, h;

	if (width <= 0 || height <= 0)
		return ('\0');
	mem_all = malloc(sizeof(int *) * height);

	if (mem_all == NULL)
	{
		return ('\0');
	}

	for (h = 0; h < height ; h++)
	{
		mem_all[h] = malloc(sizeof(int *) * width);

		if (mem_all[h] == NULL)
		{
			for (; h >= 0; h--)
				free(mem_all[h]);
			free(mem_all);
			return ('\0');
		}
	}
	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
			mem_all[h][w] = 0;
	}
	return (mem_all);
}
