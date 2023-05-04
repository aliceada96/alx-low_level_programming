#include "main.h"
/**
 * flip_bits - returns the no of bits needed to flip to get from
 * one number to another
 * @n: 1st bit
 * @m: 2nd bit
 *
 * Return: no of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int pow = n ^ m;
	unsigned long int i = 0;

	while (pow != 0)
	{
		i = i + (pow & 1);
		pow = pow >> 1;
	}
	return (i);
}
