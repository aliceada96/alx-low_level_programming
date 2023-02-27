#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string
 *
 * Return: void
 */

void rev_string(char *s)
{
	int length = 0, adress = 0;
	char temp;

	while (s[adress++])
		length++;

	for (adress = length - 1, adress >= length / 2; adress--)
	{
		temp = s[adress];
		s[adress] = s[length - adress - 1];
		s[lenth - adress - 1] = temp;
	}
}
