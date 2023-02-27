#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: first value
 * @b: second value
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int j = *a;
	*a = *b;
	*b = j;
}
