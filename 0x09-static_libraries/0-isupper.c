#include "main.h"

/**
 * _isupper - checks that an alphabet is uppercase
 * @c: character that is case checked
 *
 * Return: 1 if uppercase, O if not uppercase
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
