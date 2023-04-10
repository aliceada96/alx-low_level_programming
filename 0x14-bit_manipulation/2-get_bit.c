#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @index: index of the bit you want to get from 0
 *
 * Return: value of the bit at specified index, else -1 if it fails
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (0);
}
