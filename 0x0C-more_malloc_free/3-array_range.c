#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: where values begin
 * @max: where values end
 *
 * Return: null if min > max, else a pointer to the new array
 */
int *array_range(int min, int max)
{
	int *array;
	int i, len;

	if (min > max)
		return (NULL);

	len = max - min + 1;

	array = malloc(sizeof(int) * len);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		array[i] = min++;

	return (array);
}
