#include "main.h"

/**
 * print_most_numbers - prints from 0 to 9, does not print 2,4
 *
 * Description: prints 0 to 9, leaves out 2 and 4
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		if (n != 2 && n != 4)
			_putchar(n + '0');
	}
	_putchar('\n');

}

