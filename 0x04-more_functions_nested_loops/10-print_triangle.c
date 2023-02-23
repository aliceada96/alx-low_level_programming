#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: lengths of sides minus hypotenuse
 *
 * return: void
 */

void print_triangle(int size)
{
	int i, j;


	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				j > size - i ? _putchar('#') : _putchar(' ');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
