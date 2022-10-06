#include "main.h"

/**
 * malloc_checked - Allocates block of memory usingmalloc.
 * @b: The number of bytes to be collected
 *
 * Return: A pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);
	if (mem == NULL)
		exit(98);
	return (mem);
}
