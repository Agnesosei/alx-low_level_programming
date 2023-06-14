#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2D array of
 *              integers
 * @width: width of the 2D array.
 * @height: height of the 2D array.
 *
 * Return: NULL or pointer to the 2D array
 */

int **alloc_grid(int width, int height)
{
	int h, w;
	int **dd;

	if (width <= 0 || height <= 0)
		return (NULL);

	dd = malloc(sizeof(int *) * height);

	if (dd == NULL)
		return (NULL);

	for (h = 0; h < height; h++)
	{
		dd[h] = malloc(sizeof(int) * width);

		if (dd[h] == NULL)
		{
			for (w = 0; w < h; w++)/*free previously allocated memory*/
			free(dd[w]);
			free(dd);
			return (NULL);
		}
		for (w = 0; w < width; w++)
		{
			dd[h][w] = 0;
		}
	}
	return (dd);
}
