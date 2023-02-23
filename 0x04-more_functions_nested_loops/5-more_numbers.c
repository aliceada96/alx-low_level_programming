#include "main.h"

/**
 * more_numbers - prints ten times the numbers from 0 to 14
 *
 * return: void
 */

void more_numbers(void)
{
	int count = 0;
	int num = 0;

	for  (count = 1; count <= 10; count++)
	{

	for (num = 0; num <= 14; num++)
	{
		if (num >= 10)
		_putchar('1');
		_putchar((num % 10) + '0');
	}
	_putchar('\n');

	}
}
