#include "main.h"

/**
 * _strcmp - compares pointers to two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 *
 * Return: 0 if the strings are equal,
 * -ve difference of the 1st unmatched characters if str1<str2
 * +ve difference of the first unmatched characters if str1>str2
 */
int _strcmp(char *s1, char *s2)
{
	return (*s1 - *s2);
}