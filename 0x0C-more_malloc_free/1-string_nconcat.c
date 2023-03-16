#include "main.h"
#include <stdio.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: 1st string
 * @s2: second string
 * @n: size of string
 *
 * Return: Null if function fails; else pointer to a new space in memory
 * containing s1 then 1st n bytes of s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int len = n, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len++;

	str = (char*)malloc((len + 1) * sizeof(char));

	if (str == NULL)
		return (NULL);

	len = 0;

	for (i = 0; s1[i]; i++)
		str[len++] = s1[i];

	for (i = 0;s2[i] && i < n; i++)
		str[len++] = s2[i];

	str[len] = '\0';

	return (str);
}
