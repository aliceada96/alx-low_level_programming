#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments of the program to a string;
 * arguments are separated by a newline in new string
 * @ac: Numner of args to be passed to the program
 * @av: Array of pointers to the argument
 *
 * Return: pointer to the new string, else NULL if ac=0,av=null,function fails
 *
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int arg, byte, i, size = ac;

	if (ac == 0 || av == null)
		return (NULL);

	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			size++;
	}

	str = malloc(sizeof(char) * size + 1);

	if (str == NULL)
		return (NULL);

	i = 0;

	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			str[i++] = av[arg][byte];

		str[i++] = '\n';
	}

	return (str);
}
