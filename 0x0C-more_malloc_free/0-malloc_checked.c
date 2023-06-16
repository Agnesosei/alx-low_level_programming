#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory with malloc.
 * @b: Bytes to allocate
 *
 * Return: pointer to the allocated memory or end with value 98
 */

void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
}
