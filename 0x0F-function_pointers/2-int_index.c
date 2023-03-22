#include "function_pointers.h"

/**
 * int_index - searches for an int in an array of ints
 * @array: array of ints
 * @size: size of array
 * @cmp: a pointer to the function used to compare values
 *
 * Return: -1 if size <=0, else index of 1st element for which cmp
 * dsnt return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
