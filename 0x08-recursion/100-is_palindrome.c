#include "main.h"

/**
 * check_palindrome - check for palindrome from string
 * @s: string to be examined
 * @first: 1st character
 * @last: last character
 *
 * Return: 1 if s is palindrome else 0
 */
int check_palindrome(char *s, int first, int last)
{
	if (first == last)
	{
		return (1);
	}
	if (s[first] != s[last])
	{
		return (0);
	}
	if (first < last + 1)
	{
		return (check_palindrome(s, first + 1, last - 1));
	}
	return (1);
}

/**
 * _strlen_recursion - Returns the length of string s
 * @s: string whose length is to be determined
 *
 * Return: length of sA
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s != '\0')
	{
		len++;
		len = len + _strlen_recursion(s + 1);
	}
	return (len);
}

/**
 * is_palindrome - checks if s is a palindrome
 * @s: string to be examined
 *
 * Return: 1 if palindrome, else 0
 */
int is_palindrome(char *s)
{
	int n = _strlen_recursion(s);

	return (check_palindrome(s, 0, n - 1));
}
