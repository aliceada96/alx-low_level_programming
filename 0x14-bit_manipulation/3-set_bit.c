#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 ata a given index
 * @n: pointer to adress to set bit
 * @index: index of the bit to be set
 *
 * Return: 1 on success, -1 on failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(*n) * 8)
		return (-1);

	*n = *n | (1ul << index);
	return (1);
}
