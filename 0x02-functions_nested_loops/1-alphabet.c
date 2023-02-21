#include "main.h"

/**
 * print_alphabet - prints alphabet in lower case followed by a newline
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		_putchar(alpha);

	_putchar('\n');
}

