#include "main.h"

/**
 * clear_bit - sets bit value to 0 at a given index
 * @n: pointer to bit value
 * @index: index of bit to be set
 *
 * Return: 1 if it worked, -1 if an error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	*n = *n & ~(1 << index);
	return (1);
}
