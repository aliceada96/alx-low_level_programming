#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to be examined
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s != '\0')
	{
		len++;
		len = count + _strnlen_recursion(s + 1);
	}
	return (len);
}
