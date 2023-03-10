#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers then /n
 * @n: number of elements of the array to be printed
 * @a: array
 * Return: void
 */

void print_array(int *a, int n)
{
	int k, count;

	k = 0;
	count = 1;

	if (n < 0)
		n = 0;

	if (n > 0)
	{
		while (a[k] != '\0' && count < n)
		{
			printf("%d, ", a[k]);
			k++;
			count++;
		}
		printf("%d\n", a[k]);
	}
}

