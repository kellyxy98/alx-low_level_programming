#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocate memory block using malloc and free
 * @ptr: old allocated memory
 * @old_size: size of ptr
 * @new_size: new allocated memory size
 *
 * Return: pointer to newly allocated memory or null if fail
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int a, max = new_size;
	char *oldp = ptr;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);

	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	if (new_size > old_size)
		max = old_size;
	for (a = 0; a < max; a++)
		p[a] = oldp[a];
	free(ptr);
	return (p);
}
