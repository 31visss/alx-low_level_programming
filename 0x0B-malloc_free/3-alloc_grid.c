#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of array
 * @height: height of array
 *
 * Return: a pointer to a 2 dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **array, f, j;
	int len = width * height;

	if (len <= 0)
		return (NULL);

	array = (int **)malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);

	for (f = 0; f < height; f++)
	{
		array[f] = (int *)malloc(sizeof(int) * width);
		if (array[f] == NULL)
		{
			for (f--; f >= 0; f--)
				free(array[f]);
			free(array);
			return (NULL);
		}
	}

	for (f = 0; f < height; f++)
		for (j = 0; j < width; j++)
			array[f][j] = 0;

	return (array);
}
