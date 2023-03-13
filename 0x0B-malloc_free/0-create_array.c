#include "main.h"

/**
 * create_array - creates an array of chars, initializes it with
 * a specific char
 * @size: size of array
 * @c: specific char value that is initilaized
 *
 * Return: a pointer to the array else Null
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
		return (NULL);

	str = malloc(sizeof(char) * size);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;

	return (str);
}
