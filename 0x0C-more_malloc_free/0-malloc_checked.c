#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Entry
 *
 * @b: int
 *
 * Return: void
*/

void *malloc_checked(unsigned int b)
{
	void *alloc;

	alloc = malloc(b);

	if (alloc == NUll)
		exit(98);

	return (alloc);
}
