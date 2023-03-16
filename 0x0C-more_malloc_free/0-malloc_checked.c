#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: no of bytes to be allocated
 *
 * Return: pointer to allocated memory, else terminate normal processes
 * with status value of 98
 */
void *malloc_checked(unsigned int b)
{
	void *mal = malloc(b);

	if (mal == NULL)
		exit(98);

	return (mal);
}
