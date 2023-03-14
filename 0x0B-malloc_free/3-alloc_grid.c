#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - returns a 2 dimensional array of integers
 * @width: rows in array
 * @height: columns in array
 *
 * Return: pointer to a 2d array, else NUll
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(sizeof(int *) * height);

	if (array == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			array[i] = malloc(sizeof(int) * width);

			if (array[i] == NULL)
			{
				for (; j >= 0; j--)
					free(array[j]);
				free(array);
				return (NULL);
			}
			for (j = 0; j < width; j++)
			{
				array[i][j] = 0;
			}
		}
	}
	return (array);
}
