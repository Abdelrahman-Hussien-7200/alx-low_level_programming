#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Entry
 *
 * @nmemb: int
 *
 * @size: int
 *
 * Return: void
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int v, h;
	char *i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	h = nmemb + size;
	i = malloc(h);

	if (i == NULL)
		return (NULL);
	for (v = 0; v < h; v++)
	{
		i[v] = 0;
	}
	return (i);
}
