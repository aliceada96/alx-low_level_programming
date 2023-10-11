#include "search_algos.h"


/**
* linear_search - searches for a value in an array of integers
* @array: pointer to the first element of the array to search in
* @size: the number of elements in array
* @value: the value to search for
*
* Return: If value is not present in array or if array is NULL,
* your function must return -1
*/

int linear_search(int *array, size_t size, int value)
{
	size_t index = 0;

	if (array == NULL || size == 0)
		return (-1);

	while (index < size)
	{
		int value_at = array[index];

		printf("Value checked array[%ld] = [%d]\n", index, value_at);
		if (value_at == value)
			return (index);
		index++;
	}
	return (-1);
}
