#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: lengths of sides minus hypotenuse
 *
 * return: void
 */

void print_triangle(int size)
{
	int space;
	int hash;
	int length = 0;


	if (size > 0)
	{
		while (length < size)
		{
			for (space = size - 1; space > length; space--)
			{
				_putchar(' ');
			}
			for (hash = 0; hash < line + 1; hash++)
				_putchar('#');
		}
		_putchar('\n');

		length++;
	}
	else
	{
		_putchar('\n');
	}
}

