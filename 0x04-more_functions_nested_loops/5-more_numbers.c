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

	while (count < 10)
	{

	for (num = 0; num <= 14; num++)
	{
		_putchar(num);
	}
	_putchar('\n');

	count++;
	}
}
