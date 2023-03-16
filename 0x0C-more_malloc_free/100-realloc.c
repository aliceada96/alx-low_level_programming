#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory using malloc and free
 * @ptr: a pointer previously allocated with a call to malloc
 * @old_size: bytes allocated for ptr
 * @new_size: bytes allocated to the new mem block
 *
 * Return: A pointer to the allocated memory block, ptr if newsize=oldsize
 * NUll if ptr is not null and newsize=0
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_mem;
	char *ptr2;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		ptr = malloc(new_size);

		if (ptr == NULL)
			return (NULL);

		return (ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new_mem = malloc(new_size);

	if (new_mem == NULL)
		return (NULL);

	ptr2 = ptr;

	for (i = 0; i < new_size && i < old_size; i++)
		new_mem[i] = ptr2[i];
	free(ptr);

	return (new_mem);
}
