#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to be examined
 * Return: int length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
	return (1 + _strnlen_recursion(s + 1));
	}
}
