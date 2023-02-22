#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers in order from n to 98,
 * followed by a new line
 * @n: the number printed first
 *
 * Return: Always 0
 *
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
